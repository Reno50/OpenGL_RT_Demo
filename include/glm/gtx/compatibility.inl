<<<<<<< HEAD
/// @ref gtx_compatibility
/// @file glm/gtx/compatibility.inl

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#include <limits>

namespace glm
{
	// isfinite
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER bool isfinite(
		genType const & x)
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER bool isfinite(
		genType const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
#		if GLM_HAS_CXX11_STL
			return std::isfinite(x) != 0;
#		elif GLM_COMPILER & GLM_COMPILER_VC
<<<<<<< HEAD
			return _finite(x);
=======
			return _finite(x) != 0;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#		elif GLM_COMPILER & GLM_COMPILER_GCC && GLM_PLATFORM & GLM_PLATFORM_ANDROID
			return _isfinite(x) != 0;
#		else
			if (std::numeric_limits<genType>::is_integer || std::denorm_absent == std::numeric_limits<genType>::has_denorm)
				return std::numeric_limits<genType>::min() <= x && std::numeric_limits<genType>::max() >= x;
			else
				return -std::numeric_limits<genType>::max() <= x && std::numeric_limits<genType>::max() >= x;
#		endif
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<bool, P> isfinite(
		tvec1<T, P> const & x)
	{
		return tvec1<bool, P>(
			isfinite(x.x));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<bool, P> isfinite(
		tvec2<T, P> const & x)
	{
		return tvec2<bool, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<1, bool, Q> isfinite(
		vec<1, T, Q> const& x)
	{
		return vec<1, bool, Q>(
			isfinite(x.x));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<2, bool, Q> isfinite(
		vec<2, T, Q> const& x)
	{
		return vec<2, bool, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			isfinite(x.x),
			isfinite(x.y));
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<bool, P> isfinite(
		tvec3<T, P> const & x)
	{
		return tvec3<bool, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, bool, Q> isfinite(
		vec<3, T, Q> const& x)
	{
		return vec<3, bool, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			isfinite(x.x),
			isfinite(x.y),
			isfinite(x.z));
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<bool, P> isfinite(
		tvec4<T, P> const & x)
	{
		return tvec4<bool, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> isfinite(
		vec<4, T, Q> const& x)
	{
		return vec<4, bool, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			isfinite(x.x),
			isfinite(x.y),
			isfinite(x.z),
			isfinite(x.w));
	}

}//namespace glm
