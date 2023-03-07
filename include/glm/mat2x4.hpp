/// @ref core
/// @file glm/mat2x4.hpp

#pragma once
<<<<<<< HEAD

#include "detail/type_mat2x4.hpp"

namespace glm
{
	/// 2 columns of 4 components matrix of low precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef tmat2x4<float, lowp>		lowp_mat2x4;
	
	/// 2 columns of 4 components matrix of medium precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef tmat2x4<float, mediump>		mediump_mat2x4;
	
	/// 2 columns of 4 components matrix of high precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef tmat2x4<float, highp>		highp_mat2x4;

}//namespace glm
=======
#include "./ext/matrix_double2x4.hpp"
#include "./ext/matrix_double2x4_precision.hpp"
#include "./ext/matrix_float2x4.hpp"
#include "./ext/matrix_float2x4_precision.hpp"

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
