/// @ref gtx_dual_quaternion
<<<<<<< HEAD
/// @file glm/gtx/dual_quaternion.inl
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#include "../geometric.hpp"
#include <limits>

namespace glm
{
	// -- Component accesses --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tdualquat<T, P>::part_type & tdualquat<T, P>::operator[](typename tdualquat<T, P>::length_type i)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename tdualquat<T, Q>::part_type & tdualquat<T, Q>::operator[](typename tdualquat<T, Q>::length_type i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		assert(i >= 0 && i < this->length());
		return (&real)[i];
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tdualquat<T, P>::part_type const & tdualquat<T, P>::operator[](typename tdualquat<T, P>::length_type i) const
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename tdualquat<T, Q>::part_type const& tdualquat<T, Q>::operator[](typename tdualquat<T, Q>::length_type i) const
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		assert(i >= 0 && i < this->length());
		return (&real)[i];
	}

	// -- Implicit basic constructors --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS || !defined(GLM_FORCE_NO_CTOR_INIT)
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, P>::tdualquat()
#			ifndef GLM_FORCE_NO_CTOR_INIT 
				: real(tquat<T, P>())
				, dual(tquat<T, P>(0, 0, 0, 0))
#			endif
		{}
#	endif

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, P>::tdualquat(tdualquat<T, P> const & d)
			: real(d.real)
			, dual(d.dual)
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, P>::tdualquat(tdualquat<T, Q> const & d)
=======
#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat()
#			if GLM_CONFIG_DEFAULTED_FUNCTIONS != GLM_DISABLE
			: real(qua<T, Q>())
			, dual(qua<T, Q>(0, 0, 0, 0))
#			endif
		{}

		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat(tdualquat<T, Q> const& d)
			: real(d.real)
			, dual(d.dual)
		{}
#	endif

	template<typename T, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat(tdualquat<T, P> const& d)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: real(d.real)
		, dual(d.dual)
	{}

	// -- Explicit basic constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tdualquat<T, P>::tdualquat(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, P>::tdualquat(tquat<T, P> const & r)
		: real(r), dual(tquat<T, P>(0, 0, 0, 0))
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, P>::tdualquat(tquat<T, P> const & q, tvec3<T, P> const& p)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat(qua<T, Q> const& r)
		: real(r), dual(qua<T, Q>(0, 0, 0, 0))
	{}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat(qua<T, Q> const& q, vec<3, T, Q> const& p)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: real(q), dual(
			T(-0.5) * ( p.x*q.x + p.y*q.y + p.z*q.z),
			T(+0.5) * ( p.x*q.w + p.y*q.z - p.z*q.y),
			T(+0.5) * (-p.x*q.z + p.y*q.w + p.z*q.x),
			T(+0.5) * ( p.x*q.y - p.y*q.x + p.z*q.w))
	{}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, P>::tdualquat(tquat<T, P> const & r, tquat<T, P> const & d)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat(qua<T, Q> const& r, qua<T, Q> const& d)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: real(r), dual(d)
	{}

	// -- Conversion constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, P>::tdualquat(tdualquat<U, Q> const & q)
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat(tdualquat<U, P> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: real(q.real)
		, dual(q.dual)
	{}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P>::tdualquat(tmat2x4<T, P> const & m)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat(mat<2, 4, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		*this = dualquat_cast(m);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P>::tdualquat(tmat3x4<T, P> const & m)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR tdualquat<T, Q>::tdualquat(mat<3, 4, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		*this = dualquat_cast(m);
	}

	// -- Unary arithmetic operators --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tdualquat<T, P> & tdualquat<T, P>::operator=(tdualquat<T, P> const & q)
=======
#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER tdualquat<T, Q> & tdualquat<T, Q>::operator=(tdualquat<T, Q> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			this->real = q.real;
			this->dual = q.dual;
			return *this;
		}
<<<<<<< HEAD
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tdualquat<T, P> & tdualquat<T, P>::operator=(tdualquat<U, P> const & q)
=======
#	endif

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> & tdualquat<T, Q>::operator=(tdualquat<U, Q> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->real = q.real;
		this->dual = q.dual;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tdualquat<T, P> & tdualquat<T, P>::operator*=(U s)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> & tdualquat<T, Q>::operator*=(U s)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->real *= static_cast<T>(s);
		this->dual *= static_cast<T>(s);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tdualquat<T, P> & tdualquat<T, P>::operator/=(U s)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> & tdualquat<T, Q>::operator/=(U s)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->real /= static_cast<T>(s);
		this->dual /= static_cast<T>(s);
		return *this;
	}

	// -- Unary bit operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> operator+(tdualquat<T, P> const & q)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> operator+(tdualquat<T, Q> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return q;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> operator-(tdualquat<T, P> const & q)
	{
		return tdualquat<T, P>(-q.real, -q.dual);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> operator-(tdualquat<T, Q> const& q)
	{
		return tdualquat<T, Q>(-q.real, -q.dual);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Binary operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> operator+(tdualquat<T, P> const & q, tdualquat<T, P> const & p)
	{
		return tdualquat<T, P>(q.real + p.real,q.dual + p.dual);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> operator*(tdualquat<T, P> const & p, tdualquat<T, P> const & o)
	{
		return tdualquat<T, P>(p.real * o.real,p.real * o.dual + p.dual * o.real);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator*(tdualquat<T, P> const & q, tvec3<T, P> const & v)
	{
		tvec3<T, P> const real_v3(q.real.x,q.real.y,q.real.z);
		tvec3<T, P> const dual_v3(q.dual.x,q.dual.y,q.dual.z);
		return (cross(real_v3, cross(real_v3,v) + v * q.real.w + dual_v3) + dual_v3 * q.real.w - real_v3 * q.dual.w) * T(2) + v;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator*(tvec3<T, P> const & v,	tdualquat<T, P> const & q)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> operator+(tdualquat<T, Q> const& q, tdualquat<T, Q> const& p)
	{
		return tdualquat<T, Q>(q.real + p.real,q.dual + p.dual);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> operator*(tdualquat<T, Q> const& p, tdualquat<T, Q> const& o)
	{
		return tdualquat<T, Q>(p.real * o.real,p.real * o.dual + p.dual * o.real);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> operator*(tdualquat<T, Q> const& q, vec<3, T, Q> const& v)
	{
		vec<3, T, Q> const real_v3(q.real.x,q.real.y,q.real.z);
		vec<3, T, Q> const dual_v3(q.dual.x,q.dual.y,q.dual.z);
		return (cross(real_v3, cross(real_v3,v) + v * q.real.w + dual_v3) + dual_v3 * q.real.w - real_v3 * q.dual.w) * T(2) + v;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> operator*(vec<3, T, Q> const& v,	tdualquat<T, Q> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return glm::inverse(q) * v;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator*(tdualquat<T, P> const & q, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(q * tvec3<T, P>(v), v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator*(tvec4<T, P> const & v,	tdualquat<T, P> const & q)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, T, Q> operator*(tdualquat<T, Q> const& q, vec<4, T, Q> const& v)
	{
		return vec<4, T, Q>(q * vec<3, T, Q>(v), v.w);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, T, Q> operator*(vec<4, T, Q> const& v,	tdualquat<T, Q> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return glm::inverse(q) * v;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> operator*(tdualquat<T, P> const & q, T const & s)
	{
		return tdualquat<T, P>(q.real * s, q.dual * s);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> operator*(T const & s, tdualquat<T, P> const & q)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> operator*(tdualquat<T, Q> const& q, T const& s)
	{
		return tdualquat<T, Q>(q.real * s, q.dual * s);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> operator*(T const& s, tdualquat<T, Q> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return q * s;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> operator/(tdualquat<T, P> const & q,	T const & s)
	{
		return tdualquat<T, P>(q.real / s, q.dual / s);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> operator/(tdualquat<T, Q> const& q,	T const& s)
	{
		return tdualquat<T, Q>(q.real / s, q.dual / s);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Boolean operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator==(tdualquat<T, P> const & q1, tdualquat<T, P> const & q2)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator==(tdualquat<T, Q> const& q1, tdualquat<T, Q> const& q2)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return (q1.real == q2.real) && (q1.dual == q2.dual);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator!=(tdualquat<T, P> const & q1, tdualquat<T, P> const & q2)
	{
		return (q1.real != q2.dual) || (q1.real != q2.dual);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator!=(tdualquat<T, Q> const& q1, tdualquat<T, Q> const& q2)
	{
		return (q1.real != q2.real) || (q1.dual != q2.dual);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Operations --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> normalize(tdualquat<T, P> const & q)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> dual_quat_identity()
	{
		return tdualquat<T, Q>(
			qua<T, Q>(static_cast<T>(1), static_cast<T>(0), static_cast<T>(0), static_cast<T>(0)),
			qua<T, Q>(static_cast<T>(0), static_cast<T>(0), static_cast<T>(0), static_cast<T>(0)));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> normalize(tdualquat<T, Q> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return q / length(q.real);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> lerp(tdualquat<T, P> const & x, tdualquat<T, P> const & y, T const & a)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> lerp(tdualquat<T, Q> const& x, tdualquat<T, Q> const& y, T const& a)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		// Dual Quaternion Linear blend aka DLB:
		// Lerp is only defined in [0, 1]
		assert(a >= static_cast<T>(0));
		assert(a <= static_cast<T>(1));
		T const k = dot(x.real,y.real) < static_cast<T>(0) ? -a : a;
		T const one(1);
<<<<<<< HEAD
		return tdualquat<T, P>(x * (one - a) + y * k);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> inverse(tdualquat<T, P> const & q)
	{
		const glm::tquat<T, P> real = conjugate(q.real);
		const glm::tquat<T, P> dual = conjugate(q.dual);
		return tdualquat<T, P>(real, dual + (real * (-2.0f * dot(real,dual))));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x4<T, P> mat2x4_cast(tdualquat<T, P> const & x)
	{
		return tmat2x4<T, P>( x[0].x, x[0].y, x[0].z, x[0].w, x[1].x, x[1].y, x[1].z, x[1].w );
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x4<T, P> mat3x4_cast(tdualquat<T, P> const & x)
	{
		tquat<T, P> r = x.real / length2(x.real);
		
		tquat<T, P> const rr(r.w * x.real.w, r.x * x.real.x, r.y * x.real.y, r.z * x.real.z);
		r *= static_cast<T>(2);
		
=======
		return tdualquat<T, Q>(x * (one - a) + y * k);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> inverse(tdualquat<T, Q> const& q)
	{
		const glm::qua<T, Q> real = conjugate(q.real);
		const glm::qua<T, Q> dual = conjugate(q.dual);
		return tdualquat<T, Q>(real, dual + (real * (-2.0f * dot(real,dual))));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 4, T, Q> mat2x4_cast(tdualquat<T, Q> const& x)
	{
		return mat<2, 4, T, Q>( x[0].x, x[0].y, x[0].z, x[0].w, x[1].x, x[1].y, x[1].z, x[1].w );
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 4, T, Q> mat3x4_cast(tdualquat<T, Q> const& x)
	{
		qua<T, Q> r = x.real / length2(x.real);

		qua<T, Q> const rr(r.w * x.real.w, r.x * x.real.x, r.y * x.real.y, r.z * x.real.z);
		r *= static_cast<T>(2);

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		T const xy = r.x * x.real.y;
		T const xz = r.x * x.real.z;
		T const yz = r.y * x.real.z;
		T const wx = r.w * x.real.x;
		T const wy = r.w * x.real.y;
		T const wz = r.w * x.real.z;
<<<<<<< HEAD
		
		tvec4<T, P> const a(
=======

		vec<4, T, Q> const a(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			rr.w + rr.x - rr.y - rr.z,
			xy - wz,
			xz + wy,
			-(x.dual.w * r.x - x.dual.x * r.w + x.dual.y * r.z - x.dual.z * r.y));
<<<<<<< HEAD
		
		tvec4<T, P> const b(
=======

		vec<4, T, Q> const b(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			xy + wz,
			rr.w + rr.y - rr.x - rr.z,
			yz - wx,
			-(x.dual.w * r.y - x.dual.x * r.z - x.dual.y * r.w + x.dual.z * r.x));
<<<<<<< HEAD
		
		tvec4<T, P> const c(
=======

		vec<4, T, Q> const c(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			xz - wy,
			yz + wx,
			rr.w + rr.z - rr.x - rr.y,
			-(x.dual.w * r.z + x.dual.x * r.y - x.dual.y * r.x - x.dual.z * r.w));
<<<<<<< HEAD
		
		return tmat3x4<T, P>(a, b, c);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> dualquat_cast(tmat2x4<T, P> const & x)
	{
		return tdualquat<T, P>(
			tquat<T, P>( x[0].w, x[0].x, x[0].y, x[0].z ),
			tquat<T, P>( x[1].w, x[1].x, x[1].y, x[1].z ));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tdualquat<T, P> dualquat_cast(tmat3x4<T, P> const & x)
	{
		tquat<T, P> real(uninitialize);
		
=======

		return mat<3, 4, T, Q>(a, b, c);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> dualquat_cast(mat<2, 4, T, Q> const& x)
	{
		return tdualquat<T, Q>(
			qua<T, Q>( x[0].w, x[0].x, x[0].y, x[0].z ),
			qua<T, Q>( x[1].w, x[1].x, x[1].y, x[1].z ));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER tdualquat<T, Q> dualquat_cast(mat<3, 4, T, Q> const& x)
	{
		qua<T, Q> real;

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		T const trace = x[0].x + x[1].y + x[2].z;
		if(trace > static_cast<T>(0))
		{
			T const r = sqrt(T(1) + trace);
			T const invr = static_cast<T>(0.5) / r;
			real.w = static_cast<T>(0.5) * r;
			real.x = (x[2].y - x[1].z) * invr;
			real.y = (x[0].z - x[2].x) * invr;
			real.z = (x[1].x - x[0].y) * invr;
		}
		else if(x[0].x > x[1].y && x[0].x > x[2].z)
		{
			T const r = sqrt(T(1) + x[0].x - x[1].y - x[2].z);
			T const invr = static_cast<T>(0.5) / r;
			real.x = static_cast<T>(0.5)*r;
			real.y = (x[1].x + x[0].y) * invr;
			real.z = (x[0].z + x[2].x) * invr;
			real.w = (x[2].y - x[1].z) * invr;
		}
		else if(x[1].y > x[2].z)
		{
			T const r = sqrt(T(1) + x[1].y - x[0].x - x[2].z);
			T const invr = static_cast<T>(0.5) / r;
			real.x = (x[1].x + x[0].y) * invr;
			real.y = static_cast<T>(0.5) * r;
			real.z = (x[2].y + x[1].z) * invr;
			real.w = (x[0].z - x[2].x) * invr;
		}
		else
		{
			T const r = sqrt(T(1) + x[2].z - x[0].x - x[1].y);
			T const invr = static_cast<T>(0.5) / r;
			real.x = (x[0].z + x[2].x) * invr;
			real.y = (x[2].y + x[1].z) * invr;
			real.z = static_cast<T>(0.5) * r;
			real.w = (x[1].x - x[0].y) * invr;
		}
<<<<<<< HEAD
		
		tquat<T, P> dual(uninitialize);
=======

		qua<T, Q> dual;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		dual.x =  static_cast<T>(0.5) * ( x[0].w * real.w + x[1].w * real.z - x[2].w * real.y);
		dual.y =  static_cast<T>(0.5) * (-x[0].w * real.z + x[1].w * real.w + x[2].w * real.x);
		dual.z =  static_cast<T>(0.5) * ( x[0].w * real.y - x[1].w * real.x + x[2].w * real.w);
		dual.w = -static_cast<T>(0.5) * ( x[0].w * real.x + x[1].w * real.y + x[2].w * real.z);
<<<<<<< HEAD
		return tdualquat<T, P>(real, dual);
=======
		return tdualquat<T, Q>(real, dual);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
