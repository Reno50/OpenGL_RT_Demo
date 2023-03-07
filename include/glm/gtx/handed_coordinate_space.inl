/// @ref gtx_handed_coordinate_space
<<<<<<< HEAD
/// @file glm/gtx/handed_coordinate_space.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool rightHanded
	(
		tvec3<T, P> const & tangent,
		tvec3<T, P> const & binormal,
		tvec3<T, P> const & normal
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool rightHanded
	(
		vec<3, T, Q> const& tangent,
		vec<3, T, Q> const& binormal,
		vec<3, T, Q> const& normal
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return dot(cross(normal, tangent), binormal) > T(0);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool leftHanded
	(
		tvec3<T, P> const & tangent,
		tvec3<T, P> const & binormal,
		tvec3<T, P> const & normal
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool leftHanded
	(
		vec<3, T, Q> const& tangent,
		vec<3, T, Q> const& binormal,
		vec<3, T, Q> const& normal
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return dot(cross(normal, tangent), binormal) < T(0);
	}
}//namespace glm
