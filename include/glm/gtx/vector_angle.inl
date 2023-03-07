/// @ref gtx_vector_angle
<<<<<<< HEAD
/// @file glm/gtx/vector_angle.inl

namespace glm
{
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType angle
	(
		genType const & x,
		genType const & y
=======

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType angle
	(
		genType const& x,
		genType const& y
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'angle' only accept floating-point inputs");
		return acos(clamp(dot(x, y), genType(-1), genType(1)));
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType> 
	GLM_FUNC_QUALIFIER T angle
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y
	)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T angle(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'angle' only accept floating-point inputs");
		return acos(clamp(dot(x, y), T(-1), T(1)));
	}

	//! \todo epsilon is hard coded to 0.01
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T orientedAngle
	(
		tvec2<T, P> const & x,
		tvec2<T, P> const & y
	)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T orientedAngle(vec<2, T, Q> const& x, vec<2, T, Q> const& y)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'orientedAngle' only accept floating-point inputs");
		T const Angle(acos(clamp(dot(x, y), T(-1), T(1))));

		if(all(epsilonEqual(y, glm::rotate(x, Angle), T(0.0001))))
			return Angle;
		else
			return -Angle;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T orientedAngle
	(
		tvec3<T, P> const & x,
		tvec3<T, P> const & y,
		tvec3<T, P> const & ref
	)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T orientedAngle(vec<3, T, Q> const& x, vec<3, T, Q> const& y, vec<3, T, Q> const& ref)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'orientedAngle' only accept floating-point inputs");

		T const Angle(acos(clamp(dot(x, y), T(-1), T(1))));
		return mix(Angle, -Angle, dot(ref, cross(x, y)) < T(0));
	}
}//namespace glm
