/// @ref gtx_log_base
<<<<<<< HEAD
/// @file glm/gtx/log_base.inl

namespace glm
{
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType log(genType const & x, genType const & base)
	{
		assert(x != genType(0));
		return glm::log(x) / glm::log(base);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> log(vecType<T, P> const & x, vecType<T, P> const & base)
=======

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType log(genType const& x, genType const& base)
	{
		return glm::log(x) / glm::log(base);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> log(vec<L, T, Q> const& x, vec<L, T, Q> const& base)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return glm::log(x) / glm::log(base);
	}
}//namespace glm
