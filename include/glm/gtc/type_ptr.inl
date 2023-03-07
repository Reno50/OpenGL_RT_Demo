/// @ref gtc_type_ptr
<<<<<<< HEAD
/// @file glm/gtc/type_ptr.inl
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#include <cstring>

namespace glm
{
	/// @addtogroup gtc_type_ptr
	/// @{

<<<<<<< HEAD
	/// Return the constant address to the data of the vector input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tvec2<T, P> const & vec
	)
	{
		return &(vec.x);
	}

	//! Return the address to the data of the vector input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tvec2<T, P> & vec
	)
	{
		return &(vec.x);
	}

	/// Return the constant address to the data of the vector input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tvec3<T, P> const & vec
	)
	{
		return &(vec.x);
	}

	//! Return the address to the data of the vector input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tvec3<T, P> & vec
	)
	{
		return &(vec.x);
	}
		
	/// Return the constant address to the data of the vector input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(	
		tvec4<T, P> const & vec
	)
	{
		return &(vec.x);
	}

	//! Return the address to the data of the vector input.
	//! From GLM_GTC_type_ptr extension.
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(	
		tvec4<T, P> & vec
	)
	{
		return &(vec.x);
	}

	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat2x2<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	//! Return the address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tmat2x2<T, P> & mat
	)
	{
		return &(mat[0].x);
	}
		
	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat3x3<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	//! Return the address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tmat3x3<T, P> & mat
	)
	{
		return &(mat[0].x);
	}
		
	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat4x4<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	//! Return the address to the data of the matrix input.
	//! From GLM_GTC_type_ptr extension.
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tmat4x4<T, P> & mat
	)
	{
		return &(mat[0].x);
	}

	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat2x3<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	//! Return the address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tmat2x3<T, P> & mat
	)
	{
		return &(mat[0].x);
	}
		
	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat3x2<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	//! Return the address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tmat3x2<T, P> & mat
	)
	{
		return &(mat[0].x);
	}
		
	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat2x4<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	//! Return the address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tmat2x4<T, P> & mat
	)
	{
		return &(mat[0].x);
	}
		
	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat4x2<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	//! Return the address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(	
		tmat4x2<T, P> & mat
	)
	{
		return &(mat[0].x);
	}
		
	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat3x4<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	//! Return the address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tmat3x4<T, P> & mat
	)
	{
		return &(mat[0].x);
	}
		
	/// Return the constant address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tmat4x3<T, P> const & mat
	)
	{
		return &(mat[0].x);
	}

	/// Return the address to the data of the matrix input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr(tmat4x3<T, P> & mat)
	{
		return &(mat[0].x);
	}

	/// Return the constant address to the data of the input parameter.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T const * value_ptr
	(
		tquat<T, P> const & q
	)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(vec<2, T, Q> const& v)
	{
		return &(v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(vec<2, T, Q>& v)
	{
		return &(v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const * value_ptr(vec<3, T, Q> const& v)
	{
		return &(v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(vec<3, T, Q>& v)
	{
		return &(v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(vec<4, T, Q> const& v)
	{
		return &(v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(vec<4, T, Q>& v)
	{
		return &(v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<2, 2, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(mat<2, 2, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<3, 3, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(mat<3, 3, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<4, 4, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(mat<4, 4, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<2, 3, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(mat<2, 3, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<3, 2, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(mat<3, 2, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<2, 4, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(mat<2, 4, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<4, 2, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(mat<4, 2, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<3, 4, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(mat<3, 4, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const* value_ptr(mat<4, 3, T, Q> const& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T * value_ptr(mat<4, 3, T, Q>& m)
	{
		return &(m[0].x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T const * value_ptr(qua<T, Q> const& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return &(q[0]);
	}

<<<<<<< HEAD
	/// Return the address to the data of the quaternion input.
	/// @see gtc_type_ptr
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER T * value_ptr
	(
		tquat<T, P> & q
	)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T* value_ptr(qua<T, Q>& q)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return &(q[0]);
	}

<<<<<<< HEAD
	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tvec2<T, defaultp> make_vec2(T const * const ptr)
	{
		tvec2<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tvec2<T, defaultp>));
		return Result;
	}

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tvec3<T, defaultp> make_vec3(T const * const ptr)
	{
		tvec3<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tvec3<T, defaultp>));
		return Result;
	}

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tvec4<T, defaultp> make_vec4(T const * const ptr)
	{
		tvec4<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tvec4<T, defaultp>));
		return Result;
	}

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat2x2<T, defaultp> make_mat2x2(T const * const ptr)
	{
		tmat2x2<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat2x2<T, defaultp>));
		return Result;
	}

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat2x3<T, defaultp> make_mat2x3(T const * const ptr)
	{
		tmat2x3<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat2x3<T, defaultp>));
		return Result;
	}

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat2x4<T, defaultp> make_mat2x4(T const * const ptr)
	{
		tmat2x4<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat2x4<T, defaultp>));
		return Result;
	}

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat3x2<T, defaultp> make_mat3x2(T const * const ptr)
	{
		tmat3x2<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat3x2<T, defaultp>));
		return Result;
	}

	//! Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat3x3<T, defaultp> make_mat3x3(T const * const ptr)
	{
		tmat3x3<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat3x3<T, defaultp>));
		return Result;
	}

	//! Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat3x4<T, defaultp> make_mat3x4(T const * const ptr)
	{
		tmat3x4<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat3x4<T, defaultp>));
		return Result;
	}

	//! Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat4x2<T, defaultp> make_mat4x2(T const * const ptr)
	{
		tmat4x2<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat4x2<T, defaultp>));
		return Result;
	}

	//! Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat4x3<T, defaultp> make_mat4x3(T const * const ptr)
	{
		tmat4x3<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat4x3<T, defaultp>));
		return Result;
	}

	//! Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat4x4<T, defaultp> make_mat4x4(T const * const ptr)
	{
		tmat4x4<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tmat4x4<T, defaultp>));
		return Result;
	}

	//! Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat2x2<T, defaultp> make_mat2(T const * const ptr)
=======
	template <typename T, qualifier Q>
	inline vec<1, T, Q> make_vec1(vec<1, T, Q> const& v)
	{
		return v;
	}

	template <typename T, qualifier Q>
	inline vec<1, T, Q> make_vec1(vec<2, T, Q> const& v)
	{
		return vec<1, T, Q>(v);
	}

	template <typename T, qualifier Q>
	inline vec<1, T, Q> make_vec1(vec<3, T, Q> const& v)
	{
		return vec<1, T, Q>(v);
	}

	template <typename T, qualifier Q>
	inline vec<1, T, Q> make_vec1(vec<4, T, Q> const& v)
	{
		return vec<1, T, Q>(v);
	}

	template <typename T, qualifier Q>
	inline vec<2, T, Q> make_vec2(vec<1, T, Q> const& v)
	{
		return vec<2, T, Q>(v.x, static_cast<T>(0));
	}

	template <typename T, qualifier Q>
	inline vec<2, T, Q> make_vec2(vec<2, T, Q> const& v)
	{
		return v;
	}

	template <typename T, qualifier Q>
	inline vec<2, T, Q> make_vec2(vec<3, T, Q> const& v)
	{
		return vec<2, T, Q>(v);
	}

	template <typename T, qualifier Q>
	inline vec<2, T, Q> make_vec2(vec<4, T, Q> const& v)
	{
		return vec<2, T, Q>(v);
	}

	template <typename T, qualifier Q>
	inline vec<3, T, Q> make_vec3(vec<1, T, Q> const& v)
	{
		return vec<3, T, Q>(v.x, static_cast<T>(0), static_cast<T>(0));
	}

	template <typename T, qualifier Q>
	inline vec<3, T, Q> make_vec3(vec<2, T, Q> const& v)
	{
		return vec<3, T, Q>(v.x, v.y, static_cast<T>(0));
	}

	template <typename T, qualifier Q>
	inline vec<3, T, Q> make_vec3(vec<3, T, Q> const& v)
	{
		return v;
	}

	template <typename T, qualifier Q>
	inline vec<3, T, Q> make_vec3(vec<4, T, Q> const& v)
	{
		return vec<3, T, Q>(v);
	}

	template <typename T, qualifier Q>
	inline vec<4, T, Q> make_vec4(vec<1, T, Q> const& v)
	{
		return vec<4, T, Q>(v.x, static_cast<T>(0), static_cast<T>(0), static_cast<T>(1));
	}

	template <typename T, qualifier Q>
	inline vec<4, T, Q> make_vec4(vec<2, T, Q> const& v)
	{
		return vec<4, T, Q>(v.x, v.y, static_cast<T>(0), static_cast<T>(1));
	}

	template <typename T, qualifier Q>
	inline vec<4, T, Q> make_vec4(vec<3, T, Q> const& v)
	{
		return vec<4, T, Q>(v.x, v.y, v.z, static_cast<T>(1));
	}

	template <typename T, qualifier Q>
	inline vec<4, T, Q> make_vec4(vec<4, T, Q> const& v)
	{
		return v;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER vec<2, T, defaultp> make_vec2(T const *const ptr)
	{
		vec<2, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(vec<2, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER vec<3, T, defaultp> make_vec3(T const *const ptr)
	{
		vec<3, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(vec<3, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER vec<4, T, defaultp> make_vec4(T const *const ptr)
	{
		vec<4, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(vec<4, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<2, 2, T, defaultp> make_mat2x2(T const *const ptr)
	{
		mat<2, 2, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<2, 2, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<2, 3, T, defaultp> make_mat2x3(T const *const ptr)
	{
		mat<2, 3, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<2, 3, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<2, 4, T, defaultp> make_mat2x4(T const *const ptr)
	{
		mat<2, 4, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<2, 4, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<3, 2, T, defaultp> make_mat3x2(T const *const ptr)
	{
		mat<3, 2, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<3, 2, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<3, 3, T, defaultp> make_mat3x3(T const *const ptr)
	{
		mat<3, 3, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<3, 3, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<3, 4, T, defaultp> make_mat3x4(T const *const ptr)
	{
		mat<3, 4, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<3, 4, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<4, 2, T, defaultp> make_mat4x2(T const *const ptr)
	{
		mat<4, 2, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<4, 2, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<4, 3, T, defaultp> make_mat4x3(T const *const ptr)
	{
		mat<4, 3, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<4, 3, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<4, 4, T, defaultp> make_mat4x4(T const *const ptr)
	{
		mat<4, 4, T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(mat<4, 4, T, defaultp>));
		return Result;
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<2, 2, T, defaultp> make_mat2(T const *const ptr)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return make_mat2x2(ptr);
	}

<<<<<<< HEAD
	//! Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat3x3<T, defaultp> make_mat3(T const * const ptr)
	{
		return make_mat3x3(ptr);
	}
		
	//! Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tmat4x4<T, defaultp> make_mat4(T const * const ptr)
=======
	template<typename T>
	GLM_FUNC_QUALIFIER mat<3, 3, T, defaultp> make_mat3(T const *const ptr)
	{
		return make_mat3x3(ptr);
	}

	template<typename T>
	GLM_FUNC_QUALIFIER mat<4, 4, T, defaultp> make_mat4(T const *const ptr)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return make_mat4x4(ptr);
	}

<<<<<<< HEAD
	//! Build a quaternion from a pointer.
	/// @see gtc_type_ptr
	template <typename T>
	GLM_FUNC_QUALIFIER tquat<T, defaultp> make_quat(T const * const ptr)
	{
		tquat<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(tquat<T, defaultp>));
=======
	template<typename T>
	GLM_FUNC_QUALIFIER qua<T, defaultp> make_quat(T const *const ptr)
	{
		qua<T, defaultp> Result;
		memcpy(value_ptr(Result), ptr, sizeof(qua<T, defaultp>));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		return Result;
	}

	/// @}
}//namespace glm

