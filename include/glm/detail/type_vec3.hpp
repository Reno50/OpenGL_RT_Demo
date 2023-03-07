/// @ref core
/// @file glm/detail/type_vec3.hpp

#pragma once

<<<<<<< HEAD
#include "type_vec.hpp"
#if GLM_SWIZZLE == GLM_SWIZZLE_ENABLED
#	if GLM_HAS_UNRESTRICTED_UNIONS
#		include "_swizzle.hpp"
#	else
#		include "_swizzle_func.hpp"
#	endif
#endif //GLM_SWIZZLE == GLM_SWIZZLE_ENABLED
=======
#include "qualifier.hpp"
#if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
#	include "_swizzle.hpp"
#elif GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_FUNCTION
#	include "_swizzle_func.hpp"
#endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#include <cstddef>

namespace glm
{
<<<<<<< HEAD
	template <typename T, precision P = defaultp>
	struct tvec3
=======
	template<typename T, qualifier Q>
	struct vec<3, T, Q>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		// -- Implementation detail --

		typedef T value_type;
<<<<<<< HEAD
		typedef tvec3<T, P> type;
		typedef tvec3<bool, P> bool_type;

		// -- Data --

#		if GLM_HAS_ONLY_XYZW
			T x, y, z;

#		elif GLM_HAS_ALIGNED_TYPE
#			if GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic push
#				pragma GCC diagnostic ignored "-Wpedantic"
#			endif
#			if GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic push
#				pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
#				pragma clang diagnostic ignored "-Wnested-anon-types"
#			endif

=======
		typedef vec<3, T, Q> type;
		typedef vec<3, bool, Q> bool_type;

		// -- Data --

#		if GLM_SILENT_WARNINGS == GLM_ENABLE
#			if GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic push
#				pragma GCC diagnostic ignored "-Wpedantic"
#			elif GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic push
#				pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
#				pragma clang diagnostic ignored "-Wnested-anon-types"
#			elif GLM_COMPILER & GLM_COMPILER_VC
#				pragma warning(push)
#				pragma warning(disable: 4201)  // nonstandard extension used : nameless struct/union
#				if GLM_CONFIG_ALIGNED_GENTYPES == GLM_ENABLE
#					pragma warning(disable: 4324)  // structure was padded due to alignment specifier
#				endif
#			endif
#		endif

#		if GLM_CONFIG_XYZW_ONLY
			T x, y, z;
#		elif GLM_CONFIG_ANONYMOUS_STRUCT == GLM_ENABLE
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			union
			{
				struct{ T x, y, z; };
				struct{ T r, g, b; };
				struct{ T s, t, p; };

<<<<<<< HEAD
#				if GLM_SWIZZLE == GLM_SWIZZLE_ENABLED
					_GLM_SWIZZLE3_2_MEMBERS(T, P, glm::tvec2, x, y, z)
					_GLM_SWIZZLE3_2_MEMBERS(T, P, glm::tvec2, r, g, b)
					_GLM_SWIZZLE3_2_MEMBERS(T, P, glm::tvec2, s, t, p)
					_GLM_SWIZZLE3_3_MEMBERS(T, P, glm::tvec3, x, y, z)
					_GLM_SWIZZLE3_3_MEMBERS(T, P, glm::tvec3, r, g, b)
					_GLM_SWIZZLE3_3_MEMBERS(T, P, glm::tvec3, s, t, p)
					_GLM_SWIZZLE3_4_MEMBERS(T, P, glm::tvec4, x, y, z)
					_GLM_SWIZZLE3_4_MEMBERS(T, P, glm::tvec4, r, g, b)
					_GLM_SWIZZLE3_4_MEMBERS(T, P, glm::tvec4, s, t, p)
#				endif//GLM_SWIZZLE
			};
		
#			if GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic pop
#			endif
#			if GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic pop
#			endif
=======
				typename detail::storage<3, T, detail::is_aligned<Q>::value>::type data;

#				if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
					GLM_SWIZZLE3_2_MEMBERS(T, Q, x, y, z)
					GLM_SWIZZLE3_2_MEMBERS(T, Q, r, g, b)
					GLM_SWIZZLE3_2_MEMBERS(T, Q, s, t, p)
					GLM_SWIZZLE3_3_MEMBERS(T, Q, x, y, z)
					GLM_SWIZZLE3_3_MEMBERS(T, Q, r, g, b)
					GLM_SWIZZLE3_3_MEMBERS(T, Q, s, t, p)
					GLM_SWIZZLE3_4_MEMBERS(T, Q, x, y, z)
					GLM_SWIZZLE3_4_MEMBERS(T, Q, r, g, b)
					GLM_SWIZZLE3_4_MEMBERS(T, Q, s, t, p)
#				endif
			};
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#		else
			union { T x, r, s; };
			union { T y, g, t; };
			union { T z, b, p; };

<<<<<<< HEAD
#			if GLM_SWIZZLE == GLM_SWIZZLE_ENABLED
				GLM_SWIZZLE_GEN_VEC_FROM_VEC3(T, P, tvec3, tvec2, tvec3, tvec4)
#			endif//GLM_SWIZZLE
#		endif//GLM_LANG

=======
#			if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_FUNCTION
				GLM_SWIZZLE_GEN_VEC_FROM_VEC3(T, Q)
#			endif//GLM_CONFIG_SWIZZLE
#		endif//GLM_LANG

#		if GLM_SILENT_WARNINGS == GLM_ENABLE
#			if GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic pop
#			elif GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic pop
#			elif GLM_COMPILER & GLM_COMPILER_VC
#				pragma warning(pop)
#			endif
#		endif

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		// -- Component accesses --

		/// Return the count of components of the vector
		typedef length_t length_type;
<<<<<<< HEAD
		GLM_FUNC_DECL static length_type length(){return 3;}

		GLM_FUNC_DECL T & operator[](length_type i);
		GLM_FUNC_DECL T const & operator[](length_type i) const;

		// -- Implicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3() GLM_DEFAULT_CTOR;
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(tvec3<T, P> const & v) GLM_DEFAULT;
		template <precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(tvec3<T, Q> const & v);

		// -- Explicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR explicit tvec3(ctor);
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR explicit tvec3(T scalar);
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(T a, T b, T c);

		// -- Conversion scalar constructors --

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(A a, B b, C c);
		template <typename A, typename B, typename C>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(tvec1<A, P> const & a, tvec1<B, P> const & b, tvec1<C, P> const & c);
=======
		GLM_FUNC_DECL static GLM_CONSTEXPR length_type length(){return 3;}

		GLM_FUNC_DECL GLM_CONSTEXPR T & operator[](length_type i);
		GLM_FUNC_DECL GLM_CONSTEXPR T const& operator[](length_type i) const;

		// -- Implicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR vec() GLM_DEFAULT;
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec const& v) GLM_DEFAULT;
		template<qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<3, T, P> const& v);

		// -- Explicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR explicit vec(T scalar);
		GLM_FUNC_DECL GLM_CONSTEXPR vec(T a, T b, T c);

		// -- Conversion scalar constructors --

		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR explicit vec(vec<1, U, P> const& v);

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename X, typename Y, typename Z>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X x, Y y, Z z);
		template<typename X, typename Y, typename Z>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, Y _y, Z _z);
		template<typename X, typename Y, typename Z>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, vec<1, Y, Q> const& _y, Z _z);
		template<typename X, typename Y, typename Z>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, Z _z);
		template<typename X, typename Y, typename Z>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, Y _y, vec<1, Z, Q> const& _z);
		template<typename X, typename Y, typename Z>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, Y _y, vec<1, Z, Q> const& _z);
		template<typename X, typename Y, typename Z>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(X _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z);
		template<typename X, typename Y, typename Z>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		// -- Conversion vector constructors --

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
<<<<<<< HEAD
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(tvec2<A, Q> const & a, B b);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(tvec2<A, Q> const & a, tvec1<B, Q> const & b);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(A a, tvec2<B, Q> const & b);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR tvec3(tvec1<A, Q> const & a, tvec2<B, Q> const & b);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR GLM_EXPLICIT tvec3(tvec4<U, Q> const & v);

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR GLM_EXPLICIT tvec3(tvec3<U, Q> const & v);

		// -- Swizzle constructors --
#		if GLM_HAS_UNRESTRICTED_UNIONS && (GLM_SWIZZLE == GLM_SWIZZLE_ENABLED)
			template <int E0, int E1, int E2>
			GLM_FUNC_DECL tvec3(detail::_swizzle<3, T, P, glm::tvec3, E0, E1, E2, -1> const & that)
=======
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, P> const& _xy, B _z);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, P> const& _xy, vec<1, B, P> const& _z);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A _x, vec<2, B, P> const& _yz);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, P> const& _x, vec<2, B, P> const& _yz);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR GLM_EXPLICIT vec(vec<4, U, P> const& v);

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR GLM_EXPLICIT vec(vec<3, U, P> const& v);

		// -- Swizzle constructors --
#		if GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR
			template<int E0, int E1, int E2>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(detail::_swizzle<3, T, Q, E0, E1, E2, -1> const& that)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			{
				*this = that();
			}

<<<<<<< HEAD
			template <int E0, int E1>
			GLM_FUNC_DECL tvec3(detail::_swizzle<2, T, P, glm::tvec2, E0, E1, -1, -2> const & v, T const & scalar)
			{
				*this = tvec3<T, P>(v(), scalar);
			}

			template <int E0, int E1>
			GLM_FUNC_DECL tvec3(T const & scalar, detail::_swizzle<2, T, P, glm::tvec2, E0, E1, -1, -2> const & v)
			{
				*this = tvec3<T, P>(scalar, v());
			}
#		endif// GLM_HAS_UNRESTRICTED_UNIONS && (GLM_SWIZZLE == GLM_SWIZZLE_ENABLED)

		// -- Unary arithmetic operators --

		GLM_FUNC_DECL tvec3<T, P> & operator=(tvec3<T, P> const & v) GLM_DEFAULT;

		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator+=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator+=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator+=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator-=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator-=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator-=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator*=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator*=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator*=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator/=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator/=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator/=(tvec3<U, P> const & v);

		// -- Increment and decrement operators --

		GLM_FUNC_DECL tvec3<T, P> & operator++();
		GLM_FUNC_DECL tvec3<T, P> & operator--();
		GLM_FUNC_DECL tvec3<T, P> operator++(int);
		GLM_FUNC_DECL tvec3<T, P> operator--(int);

		// -- Unary bit operators --

		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator%=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator%=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator%=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator&=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator&=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator&=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator|=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator|=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator|=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator^=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator^=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator^=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator<<=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator<<=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator<<=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator>>=(U scalar);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator>>=(tvec1<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator>>=(tvec3<U, P> const & v);
=======
			template<int E0, int E1>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(detail::_swizzle<2, T, Q, E0, E1, -1, -2> const& v, T const& scalar)
			{
				*this = vec(v(), scalar);
			}

			template<int E0, int E1>
			GLM_FUNC_DECL GLM_CONSTEXPR vec(T const& scalar, detail::_swizzle<2, T, Q, E0, E1, -1, -2> const& v)
			{
				*this = vec(scalar, v());
			}
#		endif//GLM_CONFIG_SWIZZLE == GLM_SWIZZLE_OPERATOR

		// -- Unary arithmetic operators --

		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q>& operator=(vec<3, T, Q> const& v) GLM_DEFAULT;

		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator+=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator+=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator+=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator-=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator-=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator-=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator*=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator*=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator*=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator/=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator/=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator/=(vec<3, U, Q> const& v);

		// -- Increment and decrement operators --

		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator++();
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator--();
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator++(int);
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator--(int);

		// -- Unary bit operators --

		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator%=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator%=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator%=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator&=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator&=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator&=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator|=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator|=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator|=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator^=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator^=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator^=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator<<=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator<<=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator<<=(vec<3, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator>>=(U scalar);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator>>=(vec<1, U, Q> const& v);
		template<typename U>
		GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> & operator>>=(vec<3, U, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	};

	// -- Unary operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(tvec3<T, P> const & v);

	// -- Binary operators --

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(tvec3<T, P> const & v, tvec1<T, P> const & scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator/(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator/(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator/(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator/(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator/(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator%(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator%(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator%(T const & scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator%(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator%(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator&(tvec3<T, P> const & v1, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator&(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator&(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator&(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator&(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator|(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator|(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator|(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator|(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator|(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator^(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator^(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator^(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator^(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator^(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator<<(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator<<(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator<<(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator<<(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator<<(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator>>(tvec3<T, P> const & v, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator>>(tvec3<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator>>(T scalar, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator>>(tvec1<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator>>(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P> 
	GLM_FUNC_DECL tvec3<T, P> operator~(tvec3<T, P> const & v);

	// -- Boolean operators --

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator==(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator!=(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <precision P>
	GLM_FUNC_DECL tvec3<bool, P> operator&&(tvec3<bool, P> const & v1, tvec3<bool, P> const & v2);

	template <precision P>
	GLM_FUNC_DECL tvec3<bool, P> operator||(tvec3<bool, P> const & v1, tvec3<bool, P> const & v2);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator+(vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator-(vec<3, T, Q> const& v);

	// -- Binary operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator+(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator+(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator+(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator+(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator+(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator-(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator-(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator-(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator-(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator-(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator*(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator*(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator*(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator*(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator*(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator/(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator/(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator/(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator/(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator/(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator%(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator%(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator%(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator%(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator%(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator&(vec<3, T, Q> const& v1, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator&(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator&(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator&(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator&(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator|(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator|(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator|(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator|(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator|(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator^(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator^(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator^(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator^(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator^(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator<<(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator<<(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator<<(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator<<(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator<<(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator>>(vec<3, T, Q> const& v, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator>>(vec<3, T, Q> const& v1, vec<1, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator>>(T scalar, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator>>(vec<1, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator>>(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, T, Q> operator~(vec<3, T, Q> const& v);

	// -- Boolean operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR bool operator==(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR bool operator!=(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2);

	template<qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, bool, Q> operator&&(vec<3, bool, Q> const& v1, vec<3, bool, Q> const& v2);

	template<qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR vec<3, bool, Q> operator||(vec<3, bool, Q> const& v1, vec<3, bool, Q> const& v2);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_vec3.inl"
#endif//GLM_EXTERNAL_TEMPLATE
