/// @ref gtx_orthonormalize
<<<<<<< HEAD
/// @file glm/gtx/orthonormalize.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> orthonormalize(tmat3x3<T, P> const & m)
	{
		tmat3x3<T, P> r = m;
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> orthonormalize(mat<3, 3, T, Q> const& m)
	{
		mat<3, 3, T, Q> r = m;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		r[0] = normalize(r[0]);

		T d0 = dot(r[0], r[1]);
		r[1] -= r[0] * d0;
		r[1] = normalize(r[1]);

		T d1 = dot(r[1], r[2]);
		d0 = dot(r[0], r[2]);
		r[2] -= r[0] * d0 + r[1] * d1;
		r[2] = normalize(r[2]);

		return r;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec3<T, P> orthonormalize(tvec3<T, P> const & x, tvec3<T, P> const & y)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> orthonormalize(vec<3, T, Q> const& x, vec<3, T, Q> const& y)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return normalize(x - y * dot(y, x));
	}
}//namespace glm
