/// @ref gtx_polar_coordinates
<<<<<<< HEAD
/// @file glm/gtx/polar_coordinates.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> polar
	(
		tvec3<T, P> const & euclidean
	)
	{
		T const Length(length(euclidean));
		tvec3<T, P> const tmp(euclidean / Length);
		T const xz_dist(sqrt(tmp.x * tmp.x + tmp.z * tmp.z));

		return tvec3<T, P>(
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> polar
	(
		vec<3, T, Q> const& euclidean
	)
	{
		T const Length(length(euclidean));
		vec<3, T, Q> const tmp(euclidean / Length);
		T const xz_dist(sqrt(tmp.x * tmp.x + tmp.z * tmp.z));

		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			asin(tmp.y),	// latitude
			atan(tmp.x, tmp.z),		// longitude
			xz_dist);				// xz distance
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> euclidean
	(
		tvec2<T, P> const & polar
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> euclidean
	(
		vec<2, T, Q> const& polar
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		T const latitude(polar.x);
		T const longitude(polar.y);

<<<<<<< HEAD
		return tvec3<T, P>(
=======
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			cos(latitude) * sin(longitude),
			sin(latitude),
			cos(latitude) * cos(longitude));
	}

}//namespace glm
