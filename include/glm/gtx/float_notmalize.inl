/// @ref gtx_float_normalize
<<<<<<< HEAD
/// @file glm/gtx/float_normalize.inl
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#include <limits>

namespace glm
{
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<float, P> floatNormalize(vecType<T, P> const & v)
	{
		return vecType<float, P>(v) / static_cast<float>(std::numeric_limits<T>::max());
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, float, Q> floatNormalize(vec<L, T, Q> const& v)
	{
		return vec<L, float, Q>(v) / static_cast<float>(std::numeric_limits<T>::max());
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

}//namespace glm
