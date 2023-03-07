/// @ref gtx_projection
<<<<<<< HEAD
/// @file glm/gtx/projection.inl

namespace glm
{
	template <typename vecType>
	GLM_FUNC_QUALIFIER vecType proj(vecType const & x, vecType const & Normal)
=======

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType proj(genType const& x, genType const& Normal)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return glm::dot(x, Normal) / glm::dot(Normal, Normal) * Normal;
	}
}//namespace glm
