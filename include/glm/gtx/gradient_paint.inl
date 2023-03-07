/// @ref gtx_gradient_paint
<<<<<<< HEAD
/// @file glm/gtx/gradient_paint.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T radialGradient
	(
		tvec2<T, P> const & Center,
		T const & Radius,
		tvec2<T, P> const & Focal,
		tvec2<T, P> const & Position
	)
	{
		tvec2<T, P> F = Focal - Center;
		tvec2<T, P> D = Position - Focal;
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T radialGradient
	(
		vec<2, T, Q> const& Center,
		T const& Radius,
		vec<2, T, Q> const& Focal,
		vec<2, T, Q> const& Position
	)
	{
		vec<2, T, Q> F = Focal - Center;
		vec<2, T, Q> D = Position - Focal;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		T Radius2 = pow2(Radius);
		T Fx2 = pow2(F.x);
		T Fy2 = pow2(F.y);

		T Numerator = (D.x * F.x + D.y * F.y) + sqrt(Radius2 * (pow2(D.x) + pow2(D.y)) - pow2(D.x * F.y - D.y * F.x));
		T Denominator = Radius2 - (Fx2 + Fy2);
		return Numerator / Denominator;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T linearGradient
	(
		tvec2<T, P> const & Point0,
		tvec2<T, P> const & Point1,
		tvec2<T, P> const & Position
	)
	{
		tvec2<T, P> Dist = Point1 - Point0;
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T linearGradient
	(
		vec<2, T, Q> const& Point0,
		vec<2, T, Q> const& Point1,
		vec<2, T, Q> const& Position
	)
	{
		vec<2, T, Q> Dist = Point1 - Point0;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		return (Dist.x * (Position.x - Point0.x) + Dist.y * (Position.y - Point0.y)) / glm::dot(Dist, Dist);
	}
}//namespace glm
