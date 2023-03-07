/// @ref gtx_rotate_normalized_axis
<<<<<<< HEAD
/// @file glm/gtx/rotate_normalized_axis.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x4<T, P> rotateNormalizedAxis
	(
		tmat4x4<T, P> const & m,
		T const & angle,
		tvec3<T, P> const & v
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, T, Q> rotateNormalizedAxis
	(
		mat<4, 4, T, Q> const& m,
		T const& angle,
		vec<3, T, Q> const& v
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		T const a = angle;
		T const c = cos(a);
		T const s = sin(a);

<<<<<<< HEAD
		tvec3<T, P> const axis(v);

		tvec3<T, P> const temp((static_cast<T>(1) - c) * axis);

		tmat4x4<T, P> Rotate(uninitialize);
=======
		vec<3, T, Q> const axis(v);

		vec<3, T, Q> const temp((static_cast<T>(1) - c) * axis);

		mat<4, 4, T, Q> Rotate;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Rotate[0][0] = c + temp[0] * axis[0];
		Rotate[0][1] = 0 + temp[0] * axis[1] + s * axis[2];
		Rotate[0][2] = 0 + temp[0] * axis[2] - s * axis[1];

		Rotate[1][0] = 0 + temp[1] * axis[0] - s * axis[2];
		Rotate[1][1] = c + temp[1] * axis[1];
		Rotate[1][2] = 0 + temp[1] * axis[2] + s * axis[0];

		Rotate[2][0] = 0 + temp[2] * axis[0] + s * axis[1];
		Rotate[2][1] = 0 + temp[2] * axis[1] - s * axis[0];
		Rotate[2][2] = c + temp[2] * axis[2];

<<<<<<< HEAD
		tmat4x4<T, P> Result(uninitialize);
=======
		mat<4, 4, T, Q> Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0] = m[0] * Rotate[0][0] + m[1] * Rotate[0][1] + m[2] * Rotate[0][2];
		Result[1] = m[0] * Rotate[1][0] + m[1] * Rotate[1][1] + m[2] * Rotate[1][2];
		Result[2] = m[0] * Rotate[2][0] + m[1] * Rotate[2][1] + m[2] * Rotate[2][2];
		Result[3] = m[3];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tquat<T, P> rotateNormalizedAxis
	(
		tquat<T, P> const & q, 
		T const & angle,
		tvec3<T, P> const & v
	)
	{
		tvec3<T, P> const Tmp(v);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER qua<T, Q> rotateNormalizedAxis
	(
		qua<T, Q> const& q,
		T const& angle,
		vec<3, T, Q> const& v
	)
	{
		vec<3, T, Q> const Tmp(v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		T const AngleRad(angle);
		T const Sin = sin(AngleRad * T(0.5));

<<<<<<< HEAD
		return q * tquat<T, P>(cos(AngleRad * static_cast<T>(0.5)), Tmp.x * Sin, Tmp.y * Sin, Tmp.z * Sin);
		//return gtc::quaternion::cross(q, tquat<T, P>(cos(AngleRad * T(0.5)), Tmp.x * fSin, Tmp.y * fSin, Tmp.z * fSin));
=======
		return q * qua<T, Q>(cos(AngleRad * static_cast<T>(0.5)), Tmp.x * Sin, Tmp.y * Sin, Tmp.z * Sin);
		//return gtc::quaternion::cross(q, tquat<T, Q>(cos(AngleRad * T(0.5)), Tmp.x * fSin, Tmp.y * fSin, Tmp.z * fSin));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
