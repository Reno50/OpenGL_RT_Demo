/// @ref core
/// @file glm/mat4x2.hpp

#pragma once
<<<<<<< HEAD

#include "detail/type_mat4x2.hpp"

namespace glm
{
	/// 4 columns of 2 components matrix of low precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef tmat4x2<float, lowp>		lowp_mat4x2;
	
	/// 4 columns of 2 components matrix of medium precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef tmat4x2<float, mediump>		mediump_mat4x2;
	
	/// 4 columns of 2 components matrix of high precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef tmat4x2<float, highp>		highp_mat4x2;

}//namespace glm
=======
#include "./ext/matrix_double4x2.hpp"
#include "./ext/matrix_double4x2_precision.hpp"
#include "./ext/matrix_float4x2.hpp"
#include "./ext/matrix_float4x2_precision.hpp"

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
