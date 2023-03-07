/// @ref gtx_range
/// @file glm/gtx/range.hpp
/// @author Joshua Moerman
///
/// @defgroup gtx_range GLM_GTX_range
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Defines begin and end for vectors and matrices. Useful for range-based for loop.
/// The range is defined over the elements, not over columns or rows (e.g. mat4 has 16 elements).
///
/// <glm/gtx/range.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/range.hpp> to use the features of this extension.
///
/// Defines begin and end for vectors and matrices. Useful for range-based for loop.
/// The range is defined over the elements, not over columns or rows (e.g. mat4 has 16 elements).
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependencies
#include "../detail/setup.hpp"

<<<<<<< HEAD
#if !GLM_HAS_RANGE_FOR
#	error "GLM_GTX_range requires C++11 suppport or 'range for'"
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_range is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_range extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

#include "../gtc/type_ptr.hpp"
#include "../gtc/vec1.hpp"

namespace glm
{
	/// @addtogroup gtx_range
	/// @{

<<<<<<< HEAD
	template <typename T, precision P>
	inline length_t components(tvec1<T, P> const & v)
	{
		return v.length();
	}
	
	template <typename T, precision P>
	inline length_t components(tvec2<T, P> const & v)
	{
		return v.length();
	}
	
	template <typename T, precision P>
	inline length_t components(tvec3<T, P> const & v)
	{
		return v.length();
	}
	
	template <typename T, precision P>
	inline length_t components(tvec4<T, P> const & v)
	{
		return v.length();
	}
	
	template <typename genType>
	inline length_t components(genType const & m)
	{
		return m.length() * m[0].length();
	}
	
	template <typename genType>
	inline typename genType::value_type const * begin(genType const & v)
=======
#	if GLM_COMPILER & GLM_COMPILER_VC
#		pragma warning(push)
#		pragma warning(disable : 4100) // unreferenced formal parameter
#	endif

	template<typename T, qualifier Q>
	inline length_t components(vec<1, T, Q> const& v)
	{
		return v.length();
	}

	template<typename T, qualifier Q>
	inline length_t components(vec<2, T, Q> const& v)
	{
		return v.length();
	}

	template<typename T, qualifier Q>
	inline length_t components(vec<3, T, Q> const& v)
	{
		return v.length();
	}

	template<typename T, qualifier Q>
	inline length_t components(vec<4, T, Q> const& v)
	{
		return v.length();
	}

	template<typename genType>
	inline length_t components(genType const& m)
	{
		return m.length() * m[0].length();
	}

	template<typename genType>
	inline typename genType::value_type const * begin(genType const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return value_ptr(v);
	}

<<<<<<< HEAD
	template <typename genType>
	inline typename genType::value_type const * end(genType const & v)
=======
	template<typename genType>
	inline typename genType::value_type const * end(genType const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return begin(v) + components(v);
	}

<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	inline typename genType::value_type * begin(genType& v)
	{
		return value_ptr(v);
	}

<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	inline typename genType::value_type * end(genType& v)
	{
		return begin(v) + components(v);
	}

<<<<<<< HEAD
=======
#	if GLM_COMPILER & GLM_COMPILER_VC
#		pragma warning(pop)
#	endif

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	/// @}
}//namespace glm
