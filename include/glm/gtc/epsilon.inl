/// @ref gtc_epsilon
<<<<<<< HEAD
/// @file glm/gtc/epsilon.inl

// Dependency:
#include "quaternion.hpp"
#include "../vector_relational.hpp"
#include "../common.hpp"
#include "../vec2.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"

namespace glm
{
	template <>
	GLM_FUNC_QUALIFIER bool epsilonEqual
	(
		float const & x,
		float const & y,
		float const & epsilon
=======

// Dependency:
#include "../vector_relational.hpp"
#include "../common.hpp"

namespace glm
{
	template<>
	GLM_FUNC_QUALIFIER bool epsilonEqual
	(
		float const& x,
		float const& y,
		float const& epsilon
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return abs(x - y) < epsilon;
	}

<<<<<<< HEAD
	template <>
	GLM_FUNC_QUALIFIER bool epsilonEqual
	(
		double const & x,
		double const & y,
		double const & epsilon
=======
	template<>
	GLM_FUNC_QUALIFIER bool epsilonEqual
	(
		double const& x,
		double const& y,
		double const& epsilon
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return abs(x - y) < epsilon;
	}

<<<<<<< HEAD
	template <>
	GLM_FUNC_QUALIFIER bool epsilonNotEqual
	(
		float const & x,
		float const & y,
		float const & epsilon
	)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, T const& epsilon)
	{
		return lessThan(abs(x - y), vec<L, T, Q>(epsilon));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, T, Q> const& epsilon)
	{
		return lessThan(abs(x - y), vec<L, T, Q>(epsilon));
	}

	template<>
	GLM_FUNC_QUALIFIER bool epsilonNotEqual(float const& x, float const& y, float const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return abs(x - y) >= epsilon;
	}

<<<<<<< HEAD
	template <>
	GLM_FUNC_QUALIFIER bool epsilonNotEqual
	(
		double const & x,
		double const & y,
		double const & epsilon
	)
=======
	template<>
	GLM_FUNC_QUALIFIER bool epsilonNotEqual(double const& x, double const& y, double const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return abs(x - y) >= epsilon;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> epsilonEqual
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y,
		T const & epsilon
	)
	{
		return lessThan(abs(x - y), vecType<T, P>(epsilon));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> epsilonEqual
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y,
		vecType<T, P> const & epsilon
	)
	{
		return lessThan(abs(x - y), vecType<T, P>(epsilon));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> epsilonNotEqual
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y,
		T const & epsilon
	)
	{
		return greaterThanEqual(abs(x - y), vecType<T, P>(epsilon));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> epsilonNotEqual
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y,
		vecType<T, P> const & epsilon
	)
	{
		return greaterThanEqual(abs(x - y), vecType<T, P>(epsilon));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<bool, P> epsilonEqual
	(
		tquat<T, P> const & x,
		tquat<T, P> const & y,
		T const & epsilon
	)
	{
		tvec4<T, P> v(x.x - y.x, x.y - y.y, x.z - y.z, x.w - y.w);
		return lessThan(abs(v), tvec4<T, P>(epsilon));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<bool, P> epsilonNotEqual
	(
		tquat<T, P> const & x,
		tquat<T, P> const & y,
		T const & epsilon
	)
	{
		tvec4<T, P> v(x.x - y.x, x.y - y.y, x.z - y.z, x.w - y.w);
		return greaterThanEqual(abs(v), tvec4<T, P>(epsilon));
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonNotEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, T const& epsilon)
	{
		return greaterThanEqual(abs(x - y), vec<L, T, Q>(epsilon));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> epsilonNotEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, T, Q> const& epsilon)
	{
		return greaterThanEqual(abs(x - y), vec<L, T, Q>(epsilon));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> epsilonEqual(qua<T, Q> const& x, qua<T, Q> const& y, T const& epsilon)
	{
		vec<4, T, Q> v(x.x - y.x, x.y - y.y, x.z - y.z, x.w - y.w);
		return lessThan(abs(v), vec<4, T, Q>(epsilon));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, bool, Q> epsilonNotEqual(qua<T, Q> const& x, qua<T, Q> const& y, T const& epsilon)
	{
		vec<4, T, Q> v(x.x - y.x, x.y - y.y, x.z - y.z, x.w - y.w);
		return greaterThanEqual(abs(v), vec<4, T, Q>(epsilon));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
