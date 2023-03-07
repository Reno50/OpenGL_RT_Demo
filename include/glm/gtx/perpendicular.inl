/// @ref gtx_perpendicular
<<<<<<< HEAD
/// @file glm/gtx/perpendicular.inl

namespace glm
{
	template <typename vecType> 
	GLM_FUNC_QUALIFIER vecType perp
	(
		vecType const & x, 
		vecType const & Normal
	)
=======

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType perp(genType const& x, genType const& Normal)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return x - proj(x, Normal);
	}
}//namespace glm
