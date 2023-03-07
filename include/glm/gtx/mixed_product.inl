/// @ref gtx_mixed_product
<<<<<<< HEAD
/// @file glm/gtx/mixed_product.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T mixedProduct
	(
		tvec3<T, P> const & v1,
		tvec3<T, P> const & v2,
		tvec3<T, P> const & v3
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T mixedProduct
	(
		vec<3, T, Q> const& v1,
		vec<3, T, Q> const& v2,
		vec<3, T, Q> const& v3
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return dot(cross(v1, v2), v3);
	}
}//namespace glm
