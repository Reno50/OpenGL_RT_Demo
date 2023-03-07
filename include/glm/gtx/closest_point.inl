/// @ref gtx_closest_point
<<<<<<< HEAD
/// @file glm/gtx/closest_point.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> closestPointOnLine
	(
		tvec3<T, P> const & point,
		tvec3<T, P> const & a,
		tvec3<T, P> const & b
	)
	{
		T LineLength = distance(a, b);
		tvec3<T, P> Vector = point - a;
		tvec3<T, P> LineDirection = (b - a) / LineLength;
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> closestPointOnLine
	(
		vec<3, T, Q> const& point,
		vec<3, T, Q> const& a,
		vec<3, T, Q> const& b
	)
	{
		T LineLength = distance(a, b);
		vec<3, T, Q> Vector = point - a;
		vec<3, T, Q> LineDirection = (b - a) / LineLength;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		// Project Vector to LineDirection to get the distance of point from a
		T Distance = dot(Vector, LineDirection);

		if(Distance <= T(0)) return a;
		if(Distance >= LineLength) return b;
		return a + LineDirection * Distance;
	}
<<<<<<< HEAD
	
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> closestPointOnLine
	(
		tvec2<T, P> const & point,
		tvec2<T, P> const & a,
		tvec2<T, P> const & b
	)
	{
		T LineLength = distance(a, b);
		tvec2<T, P> Vector = point - a;
		tvec2<T, P> LineDirection = (b - a) / LineLength;
=======

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<2, T, Q> closestPointOnLine
	(
		vec<2, T, Q> const& point,
		vec<2, T, Q> const& a,
		vec<2, T, Q> const& b
	)
	{
		T LineLength = distance(a, b);
		vec<2, T, Q> Vector = point - a;
		vec<2, T, Q> LineDirection = (b - a) / LineLength;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		// Project Vector to LineDirection to get the distance of point from a
		T Distance = dot(Vector, LineDirection);

		if(Distance <= T(0)) return a;
		if(Distance >= LineLength) return b;
		return a + LineDirection * Distance;
	}
<<<<<<< HEAD
	
=======

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
}//namespace glm
