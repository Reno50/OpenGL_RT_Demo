<<<<<<< HEAD
/// @ref core
/// @file glm/detail/type_half.hpp

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#pragma once

#include "setup.hpp"

namespace glm{
namespace detail
{
	typedef short hdata;

	GLM_FUNC_DECL float toFloat32(hdata value);
<<<<<<< HEAD
	GLM_FUNC_DECL hdata toFloat16(float const & value);
=======
	GLM_FUNC_DECL hdata toFloat16(float const& value);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

}//namespace detail
}//namespace glm

#include "type_half.inl"
