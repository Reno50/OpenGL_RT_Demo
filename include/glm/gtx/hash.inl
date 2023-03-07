/// @ref gtx_hash
<<<<<<< HEAD
/// @file glm/gtx/hash.inl
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
///
/// @see core (dependence)
///
/// @defgroup gtx_hash GLM_GTX_hash
/// @ingroup gtx
///
/// @brief Add std::hash support for glm types
///
<<<<<<< HEAD
/// <glm/gtx/hash.inl> need to be included to use these functionalities.
=======
/// <glm/gtx/hash.inl> need to be included to use the features of this extension.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm {
namespace detail
{
	GLM_INLINE void hash_combine(size_t &seed, size_t hash)
	{
		hash += 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= hash;
	}
}}

namespace std
{
<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tvec1<T, P>>::operator()(glm::tvec1<T, P> const & v) const
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::vec<1, T, Q>>::operator()(glm::vec<1, T, Q> const& v) const
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		hash<T> hasher;
		return hasher(v.x);
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tvec2<T, P>>::operator()(glm::tvec2<T, P> const & v) const
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::vec<2, T, Q>>::operator()(glm::vec<2, T, Q> const& v) const
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		size_t seed = 0;
		hash<T> hasher;
		glm::detail::hash_combine(seed, hasher(v.x));
		glm::detail::hash_combine(seed, hasher(v.y));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tvec3<T, P>>::operator()(glm::tvec3<T, P> const & v) const
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::vec<3, T, Q>>::operator()(glm::vec<3, T, Q> const& v) const
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		size_t seed = 0;
		hash<T> hasher;
		glm::detail::hash_combine(seed, hasher(v.x));
		glm::detail::hash_combine(seed, hasher(v.y));
		glm::detail::hash_combine(seed, hasher(v.z));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tvec4<T, P>>::operator()(glm::tvec4<T, P> const & v) const
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::vec<4, T, Q>>::operator()(glm::vec<4, T, Q> const& v) const
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		size_t seed = 0;
		hash<T> hasher;
		glm::detail::hash_combine(seed, hasher(v.x));
		glm::detail::hash_combine(seed, hasher(v.y));
		glm::detail::hash_combine(seed, hasher(v.z));
		glm::detail::hash_combine(seed, hasher(v.w));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tquat<T, P>>::operator()(glm::tquat<T,P> const & q) const
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::qua<T, Q>>::operator()(glm::qua<T,Q> const& q) const
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		size_t seed = 0;
		hash<T> hasher;
		glm::detail::hash_combine(seed, hasher(q.x));
		glm::detail::hash_combine(seed, hasher(q.y));
		glm::detail::hash_combine(seed, hasher(q.z));
		glm::detail::hash_combine(seed, hasher(q.w));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tdualquat<T, P>>::operator()(glm::tdualquat<T, P> const & q) const
	{
		size_t seed = 0;
		hash<glm::tquat<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::tdualquat<T, Q>>::operator()(glm::tdualquat<T, Q> const& q) const
	{
		size_t seed = 0;
		hash<glm::qua<T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(q.real));
		glm::detail::hash_combine(seed, hasher(q.dual));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat2x2<T, P>>::operator()(glm::tmat2x2<T, P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec2<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<2, 2, T, Q>>::operator()(glm::mat<2, 2, T, Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<2, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat2x3<T, P>>::operator()(glm::tmat2x3<T, P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec3<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<2, 3, T, Q>>::operator()(glm::mat<2, 3, T, Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<3, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat2x4<T, P>>::operator()(glm::tmat2x4<T, P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec4<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<2, 4, T, Q>>::operator()(glm::mat<2, 4, T, Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<4, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat3x2<T, P>>::operator()(glm::tmat3x2<T, P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec2<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<3, 2, T, Q>>::operator()(glm::mat<3, 2, T, Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<2, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat3x3<T, P>>::operator()(glm::tmat3x3<T, P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec3<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<3, 3, T, Q>>::operator()(glm::mat<3, 3, T, Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<3, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat3x4<T, P>>::operator()(glm::tmat3x4<T, P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec4<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<3, 4, T, Q>>::operator()(glm::mat<3, 4, T, Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<4, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat4x2<T,P>>::operator()(glm::tmat4x2<T,P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec2<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<4, 2, T,Q>>::operator()(glm::mat<4, 2, T,Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<2, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		glm::detail::hash_combine(seed, hasher(m[3]));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat4x3<T,P>>::operator()(glm::tmat4x3<T,P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec3<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<4, 3, T,Q>>::operator()(glm::mat<4, 3, T,Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<3, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		glm::detail::hash_combine(seed, hasher(m[3]));
		return seed;
	}

<<<<<<< HEAD
	template <typename T, glm::precision P>
	GLM_FUNC_QUALIFIER size_t hash<glm::tmat4x4<T,P>>::operator()(glm::tmat4x4<T, P> const & m) const
	{
		size_t seed = 0;
		hash<glm::tvec4<T, P>> hasher;
=======
	template<typename T, glm::qualifier Q>
	GLM_FUNC_QUALIFIER size_t hash<glm::mat<4, 4, T,Q>>::operator()(glm::mat<4, 4, T, Q> const& m) const
	{
		size_t seed = 0;
		hash<glm::vec<4, T, Q>> hasher;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		glm::detail::hash_combine(seed, hasher(m[0]));
		glm::detail::hash_combine(seed, hasher(m[1]));
		glm::detail::hash_combine(seed, hasher(m[2]));
		glm::detail::hash_combine(seed, hasher(m[3]));
		return seed;
	}
}
