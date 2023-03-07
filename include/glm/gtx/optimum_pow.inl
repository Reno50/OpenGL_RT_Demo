/// @ref gtx_optimum_pow
<<<<<<< HEAD
/// @file glm/gtx/optimum_pow.inl

namespace glm
{
	template <typename genType>
	GLM_FUNC_QUALIFIER genType pow2(genType const & x)
=======

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType pow2(genType const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return x * x;
	}

<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER genType pow3(genType const & x)
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER genType pow3(genType const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return x * x * x;
	}

<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER genType pow4(genType const & x)
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER genType pow4(genType const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return (x * x) * (x * x);
	}
}//namespace glm
