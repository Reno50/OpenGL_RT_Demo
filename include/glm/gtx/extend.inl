/// @ref gtx_extend
<<<<<<< HEAD
/// @file glm/gtx/extend.inl

namespace glm
{
	template <typename genType>
	GLM_FUNC_QUALIFIER genType extend
	(
		genType const & Origin, 
		genType const & Source, 
		genType const & Distance
=======

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType extend
	(
		genType const& Origin,
		genType const& Source,
		genType const& Distance
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return Origin + (Source - Origin) * Distance;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> extend
	(
		tvec2<T, P> const & Origin,
		tvec2<T, P> const & Source,
		T const & Distance
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<2, T, Q> extend
	(
		vec<2, T, Q> const& Origin,
		vec<2, T, Q> const& Source,
		T const& Distance
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return Origin + (Source - Origin) * Distance;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> extend
	(
		tvec3<T, P> const & Origin,
		tvec3<T, P> const & Source,
		T const & Distance
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> extend
	(
		vec<3, T, Q> const& Origin,
		vec<3, T, Q> const& Source,
		T const& Distance
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return Origin + (Source - Origin) * Distance;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> extend
	(
		tvec4<T, P> const & Origin,
		tvec4<T, P> const & Source,
		T const & Distance
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, T, Q> extend
	(
		vec<4, T, Q> const& Origin,
		vec<4, T, Q> const& Source,
		T const& Distance
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return Origin + (Source - Origin) * Distance;
	}
}//namespace glm
