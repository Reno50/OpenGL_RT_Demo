<<<<<<< HEAD
/// @ref core
/// @file glm/detail/func_matrix.inl

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#include "../geometric.hpp"
#include <limits>

namespace glm{
namespace detail
{
<<<<<<< HEAD
	template <template <typename, precision> class matType, typename T, precision P, bool Aligned>
	struct compute_matrixCompMult
	{
		GLM_FUNC_QUALIFIER static matType<T, P> call(matType<T, P> const& x, matType<T, P> const& y)
		{
			matType<T, P> result(uninitialize);
			for(length_t i = 0; i < result.length(); ++i)
				result[i] = x[i] * y[i];
			return result;
		}
	};

	template <template <class, precision> class matType, typename T, precision P, bool Aligned>
	struct compute_transpose{};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat2x2, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat2x2<T, P> call(tmat2x2<T, P> const & m)
		{
			tmat2x2<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			return result;
		}
	};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat2x3, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat3x2<T, P> call(tmat2x3<T, P> const & m)
		{
			tmat3x2<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			result[2][0] = m[0][2];
			result[2][1] = m[1][2];
			return result;
		}
	};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat2x4, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat4x2<T, P> call(tmat2x4<T, P> const & m)
		{
			tmat4x2<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			result[2][0] = m[0][2];
			result[2][1] = m[1][2];
			result[3][0] = m[0][3];
			result[3][1] = m[1][3];
			return result;
		}
	};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat3x2, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat2x3<T, P> call(tmat3x2<T, P> const & m)
		{
			tmat2x3<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[0][2] = m[2][0];
			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			result[1][2] = m[2][1];
			return result;
		}
	};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat3x3, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat3x3<T, P> call(tmat3x3<T, P> const & m)
		{
			tmat3x3<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[0][2] = m[2][0];

			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			result[1][2] = m[2][1];

			result[2][0] = m[0][2];
			result[2][1] = m[1][2];
			result[2][2] = m[2][2];
			return result;
		}
	};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat3x4, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat4x3<T, P> call(tmat3x4<T, P> const & m)
		{
			tmat4x3<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[0][2] = m[2][0];
			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			result[1][2] = m[2][1];
			result[2][0] = m[0][2];
			result[2][1] = m[1][2];
			result[2][2] = m[2][2];
			result[3][0] = m[0][3];
			result[3][1] = m[1][3];
			result[3][2] = m[2][3];
			return result;
		}
	};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat4x2, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat2x4<T, P> call(tmat4x2<T, P> const & m)
		{
			tmat2x4<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[0][2] = m[2][0];
			result[0][3] = m[3][0];
			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			result[1][2] = m[2][1];
			result[1][3] = m[3][1];
			return result;
		}
	};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat4x3, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat3x4<T, P> call(tmat4x3<T, P> const & m)
		{
			tmat3x4<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[0][2] = m[2][0];
			result[0][3] = m[3][0];
			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			result[1][2] = m[2][1];
			result[1][3] = m[3][1];
			result[2][0] = m[0][2];
			result[2][1] = m[1][2];
			result[2][2] = m[2][2];
			result[2][3] = m[3][2];
			return result;
		}
	};

	template <typename T, precision P, bool Aligned>
	struct compute_transpose<tmat4x4, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat4x4<T, P> call(tmat4x4<T, P> const & m)
		{
			tmat4x4<T, P> result(uninitialize);
			result[0][0] = m[0][0];
			result[0][1] = m[1][0];
			result[0][2] = m[2][0];
			result[0][3] = m[3][0];

			result[1][0] = m[0][1];
			result[1][1] = m[1][1];
			result[1][2] = m[2][1];
			result[1][3] = m[3][1];

			result[2][0] = m[0][2];
			result[2][1] = m[1][2];
			result[2][2] = m[2][2];
			result[2][3] = m[3][2];

			result[3][0] = m[0][3];
			result[3][1] = m[1][3];
			result[3][2] = m[2][3];
			result[3][3] = m[3][3];
			return result;
		}
	};

	template <template <typename, precision> class matType, typename T, precision P, bool Aligned>
	struct compute_determinant{};

	template <typename T, precision P, bool Aligned>
	struct compute_determinant<tmat2x2, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(tmat2x2<T, P> const & m)
=======
	template<length_t C, length_t R, typename T, qualifier Q, bool Aligned>
	struct compute_matrixCompMult
	{
		GLM_FUNC_QUALIFIER static mat<C, R, T, Q> call(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
		{
			mat<C, R, T, Q> Result;
			for(length_t i = 0; i < Result.length(); ++i)
				Result[i] = x[i] * y[i];
			return Result;
		}
	};

	template<length_t C, length_t R, typename T, qualifier Q, bool Aligned>
	struct compute_transpose{};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<2, 2, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<2, 2, T, Q> call(mat<2, 2, T, Q> const& m)
		{
			mat<2, 2, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<2, 3, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<3, 2, T, Q> call(mat<2, 3, T, Q> const& m)
		{
			mat<3,2, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			Result[2][0] = m[0][2];
			Result[2][1] = m[1][2];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<2, 4, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<4, 2, T, Q> call(mat<2, 4, T, Q> const& m)
		{
			mat<4, 2, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			Result[2][0] = m[0][2];
			Result[2][1] = m[1][2];
			Result[3][0] = m[0][3];
			Result[3][1] = m[1][3];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<3, 2, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<2, 3, T, Q> call(mat<3, 2, T, Q> const& m)
		{
			mat<2, 3, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[0][2] = m[2][0];
			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			Result[1][2] = m[2][1];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<3, 3, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<3, 3, T, Q> call(mat<3, 3, T, Q> const& m)
		{
			mat<3, 3, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[0][2] = m[2][0];

			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			Result[1][2] = m[2][1];

			Result[2][0] = m[0][2];
			Result[2][1] = m[1][2];
			Result[2][2] = m[2][2];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<3, 4, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<4, 3, T, Q> call(mat<3, 4, T, Q> const& m)
		{
			mat<4, 3, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[0][2] = m[2][0];
			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			Result[1][2] = m[2][1];
			Result[2][0] = m[0][2];
			Result[2][1] = m[1][2];
			Result[2][2] = m[2][2];
			Result[3][0] = m[0][3];
			Result[3][1] = m[1][3];
			Result[3][2] = m[2][3];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<4, 2, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<2, 4, T, Q> call(mat<4, 2, T, Q> const& m)
		{
			mat<2, 4, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[0][2] = m[2][0];
			Result[0][3] = m[3][0];
			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			Result[1][2] = m[2][1];
			Result[1][3] = m[3][1];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<4, 3, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<3, 4, T, Q> call(mat<4, 3, T, Q> const& m)
		{
			mat<3, 4, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[0][2] = m[2][0];
			Result[0][3] = m[3][0];
			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			Result[1][2] = m[2][1];
			Result[1][3] = m[3][1];
			Result[2][0] = m[0][2];
			Result[2][1] = m[1][2];
			Result[2][2] = m[2][2];
			Result[2][3] = m[3][2];
			return Result;
		}
	};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_transpose<4, 4, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<4, 4, T, Q> call(mat<4, 4, T, Q> const& m)
		{
			mat<4, 4, T, Q> Result;
			Result[0][0] = m[0][0];
			Result[0][1] = m[1][0];
			Result[0][2] = m[2][0];
			Result[0][3] = m[3][0];

			Result[1][0] = m[0][1];
			Result[1][1] = m[1][1];
			Result[1][2] = m[2][1];
			Result[1][3] = m[3][1];

			Result[2][0] = m[0][2];
			Result[2][1] = m[1][2];
			Result[2][2] = m[2][2];
			Result[2][3] = m[3][2];

			Result[3][0] = m[0][3];
			Result[3][1] = m[1][3];
			Result[3][2] = m[2][3];
			Result[3][3] = m[3][3];
			return Result;
		}
	};

	template<length_t C, length_t R, typename T, qualifier Q, bool Aligned>
	struct compute_determinant{};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_determinant<2, 2, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(mat<2, 2, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return m[0][0] * m[1][1] - m[1][0] * m[0][1];
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, bool Aligned>
	struct compute_determinant<tmat3x3, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(tmat3x3<T, P> const & m)
=======
	template<typename T, qualifier Q, bool Aligned>
	struct compute_determinant<3, 3, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(mat<3, 3, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return
				+ m[0][0] * (m[1][1] * m[2][2] - m[2][1] * m[1][2])
				- m[1][0] * (m[0][1] * m[2][2] - m[2][1] * m[0][2])
				+ m[2][0] * (m[0][1] * m[1][2] - m[1][1] * m[0][2]);
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, bool Aligned>
	struct compute_determinant<tmat4x4, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(tmat4x4<T, P> const & m)
=======
	template<typename T, qualifier Q, bool Aligned>
	struct compute_determinant<4, 4, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(mat<4, 4, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			T SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
			T SubFactor01 = m[2][1] * m[3][3] - m[3][1] * m[2][3];
			T SubFactor02 = m[2][1] * m[3][2] - m[3][1] * m[2][2];
			T SubFactor03 = m[2][0] * m[3][3] - m[3][0] * m[2][3];
			T SubFactor04 = m[2][0] * m[3][2] - m[3][0] * m[2][2];
			T SubFactor05 = m[2][0] * m[3][1] - m[3][0] * m[2][1];

<<<<<<< HEAD
			tvec4<T, P> DetCof(
=======
			vec<4, T, Q> DetCof(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
				+ (m[1][1] * SubFactor00 - m[1][2] * SubFactor01 + m[1][3] * SubFactor02),
				- (m[1][0] * SubFactor00 - m[1][2] * SubFactor03 + m[1][3] * SubFactor04),
				+ (m[1][0] * SubFactor01 - m[1][1] * SubFactor03 + m[1][3] * SubFactor05),
				- (m[1][0] * SubFactor02 - m[1][1] * SubFactor04 + m[1][2] * SubFactor05));

			return
				m[0][0] * DetCof[0] + m[0][1] * DetCof[1] +
				m[0][2] * DetCof[2] + m[0][3] * DetCof[3];
		}
	};

<<<<<<< HEAD
	template <template <typename, precision> class matType, typename T, precision P, bool Aligned>
	struct compute_inverse{};

	template <typename T, precision P, bool Aligned>
	struct compute_inverse<tmat2x2, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat2x2<T, P> call(tmat2x2<T, P> const& m)
=======
	template<length_t C, length_t R, typename T, qualifier Q, bool Aligned>
	struct compute_inverse{};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_inverse<2, 2, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<2, 2, T, Q> call(mat<2, 2, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			T OneOverDeterminant = static_cast<T>(1) / (
				+ m[0][0] * m[1][1]
				- m[1][0] * m[0][1]);

<<<<<<< HEAD
			tmat2x2<T, P> Inverse(
=======
			mat<2, 2, T, Q> Inverse(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
				+ m[1][1] * OneOverDeterminant,
				- m[0][1] * OneOverDeterminant,
				- m[1][0] * OneOverDeterminant,
				+ m[0][0] * OneOverDeterminant);

			return Inverse;
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, bool Aligned>
	struct compute_inverse<tmat3x3, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat3x3<T, P> call(tmat3x3<T, P> const& m)
=======
	template<typename T, qualifier Q, bool Aligned>
	struct compute_inverse<3, 3, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<3, 3, T, Q> call(mat<3, 3, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			T OneOverDeterminant = static_cast<T>(1) / (
				+ m[0][0] * (m[1][1] * m[2][2] - m[2][1] * m[1][2])
				- m[1][0] * (m[0][1] * m[2][2] - m[2][1] * m[0][2])
				+ m[2][0] * (m[0][1] * m[1][2] - m[1][1] * m[0][2]));

<<<<<<< HEAD
			tmat3x3<T, P> Inverse(uninitialize);
=======
			mat<3, 3, T, Q> Inverse;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Inverse[0][0] = + (m[1][1] * m[2][2] - m[2][1] * m[1][2]) * OneOverDeterminant;
			Inverse[1][0] = - (m[1][0] * m[2][2] - m[2][0] * m[1][2]) * OneOverDeterminant;
			Inverse[2][0] = + (m[1][0] * m[2][1] - m[2][0] * m[1][1]) * OneOverDeterminant;
			Inverse[0][1] = - (m[0][1] * m[2][2] - m[2][1] * m[0][2]) * OneOverDeterminant;
			Inverse[1][1] = + (m[0][0] * m[2][2] - m[2][0] * m[0][2]) * OneOverDeterminant;
			Inverse[2][1] = - (m[0][0] * m[2][1] - m[2][0] * m[0][1]) * OneOverDeterminant;
			Inverse[0][2] = + (m[0][1] * m[1][2] - m[1][1] * m[0][2]) * OneOverDeterminant;
			Inverse[1][2] = - (m[0][0] * m[1][2] - m[1][0] * m[0][2]) * OneOverDeterminant;
			Inverse[2][2] = + (m[0][0] * m[1][1] - m[1][0] * m[0][1]) * OneOverDeterminant;

			return Inverse;
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, bool Aligned>
	struct compute_inverse<tmat4x4, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static tmat4x4<T, P> call(tmat4x4<T, P> const& m)
=======
	template<typename T, qualifier Q, bool Aligned>
	struct compute_inverse<4, 4, T, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static mat<4, 4, T, Q> call(mat<4, 4, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			T Coef00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
			T Coef02 = m[1][2] * m[3][3] - m[3][2] * m[1][3];
			T Coef03 = m[1][2] * m[2][3] - m[2][2] * m[1][3];

			T Coef04 = m[2][1] * m[3][3] - m[3][1] * m[2][3];
			T Coef06 = m[1][1] * m[3][3] - m[3][1] * m[1][3];
			T Coef07 = m[1][1] * m[2][3] - m[2][1] * m[1][3];

			T Coef08 = m[2][1] * m[3][2] - m[3][1] * m[2][2];
			T Coef10 = m[1][1] * m[3][2] - m[3][1] * m[1][2];
			T Coef11 = m[1][1] * m[2][2] - m[2][1] * m[1][2];

			T Coef12 = m[2][0] * m[3][3] - m[3][0] * m[2][3];
			T Coef14 = m[1][0] * m[3][3] - m[3][0] * m[1][3];
			T Coef15 = m[1][0] * m[2][3] - m[2][0] * m[1][3];

			T Coef16 = m[2][0] * m[3][2] - m[3][0] * m[2][2];
			T Coef18 = m[1][0] * m[3][2] - m[3][0] * m[1][2];
			T Coef19 = m[1][0] * m[2][2] - m[2][0] * m[1][2];

			T Coef20 = m[2][0] * m[3][1] - m[3][0] * m[2][1];
			T Coef22 = m[1][0] * m[3][1] - m[3][0] * m[1][1];
			T Coef23 = m[1][0] * m[2][1] - m[2][0] * m[1][1];

<<<<<<< HEAD
			tvec4<T, P> Fac0(Coef00, Coef00, Coef02, Coef03);
			tvec4<T, P> Fac1(Coef04, Coef04, Coef06, Coef07);
			tvec4<T, P> Fac2(Coef08, Coef08, Coef10, Coef11);
			tvec4<T, P> Fac3(Coef12, Coef12, Coef14, Coef15);
			tvec4<T, P> Fac4(Coef16, Coef16, Coef18, Coef19);
			tvec4<T, P> Fac5(Coef20, Coef20, Coef22, Coef23);

			tvec4<T, P> Vec0(m[1][0], m[0][0], m[0][0], m[0][0]);
			tvec4<T, P> Vec1(m[1][1], m[0][1], m[0][1], m[0][1]);
			tvec4<T, P> Vec2(m[1][2], m[0][2], m[0][2], m[0][2]);
			tvec4<T, P> Vec3(m[1][3], m[0][3], m[0][3], m[0][3]);

			tvec4<T, P> Inv0(Vec1 * Fac0 - Vec2 * Fac1 + Vec3 * Fac2);
			tvec4<T, P> Inv1(Vec0 * Fac0 - Vec2 * Fac3 + Vec3 * Fac4);
			tvec4<T, P> Inv2(Vec0 * Fac1 - Vec1 * Fac3 + Vec3 * Fac5);
			tvec4<T, P> Inv3(Vec0 * Fac2 - Vec1 * Fac4 + Vec2 * Fac5);

			tvec4<T, P> SignA(+1, -1, +1, -1);
			tvec4<T, P> SignB(-1, +1, -1, +1);
			tmat4x4<T, P> Inverse(Inv0 * SignA, Inv1 * SignB, Inv2 * SignA, Inv3 * SignB);

			tvec4<T, P> Row0(Inverse[0][0], Inverse[1][0], Inverse[2][0], Inverse[3][0]);

			tvec4<T, P> Dot0(m[0] * Row0);
=======
			vec<4, T, Q> Fac0(Coef00, Coef00, Coef02, Coef03);
			vec<4, T, Q> Fac1(Coef04, Coef04, Coef06, Coef07);
			vec<4, T, Q> Fac2(Coef08, Coef08, Coef10, Coef11);
			vec<4, T, Q> Fac3(Coef12, Coef12, Coef14, Coef15);
			vec<4, T, Q> Fac4(Coef16, Coef16, Coef18, Coef19);
			vec<4, T, Q> Fac5(Coef20, Coef20, Coef22, Coef23);

			vec<4, T, Q> Vec0(m[1][0], m[0][0], m[0][0], m[0][0]);
			vec<4, T, Q> Vec1(m[1][1], m[0][1], m[0][1], m[0][1]);
			vec<4, T, Q> Vec2(m[1][2], m[0][2], m[0][2], m[0][2]);
			vec<4, T, Q> Vec3(m[1][3], m[0][3], m[0][3], m[0][3]);

			vec<4, T, Q> Inv0(Vec1 * Fac0 - Vec2 * Fac1 + Vec3 * Fac2);
			vec<4, T, Q> Inv1(Vec0 * Fac0 - Vec2 * Fac3 + Vec3 * Fac4);
			vec<4, T, Q> Inv2(Vec0 * Fac1 - Vec1 * Fac3 + Vec3 * Fac5);
			vec<4, T, Q> Inv3(Vec0 * Fac2 - Vec1 * Fac4 + Vec2 * Fac5);

			vec<4, T, Q> SignA(+1, -1, +1, -1);
			vec<4, T, Q> SignB(-1, +1, -1, +1);
			mat<4, 4, T, Q> Inverse(Inv0 * SignA, Inv1 * SignB, Inv2 * SignA, Inv3 * SignB);

			vec<4, T, Q> Row0(Inverse[0][0], Inverse[1][0], Inverse[2][0], Inverse[3][0]);

			vec<4, T, Q> Dot0(m[0] * Row0);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			T Dot1 = (Dot0.x + Dot0.y) + (Dot0.z + Dot0.w);

			T OneOverDeterminant = static_cast<T>(1) / Dot1;

			return Inverse * OneOverDeterminant;
		}
	};
}//namespace detail

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class matType>
	GLM_FUNC_QUALIFIER matType<T, P> matrixCompMult(matType<T, P> const & x, matType<T, P> const & y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'matrixCompMult' only accept floating-point inputs");
		return detail::compute_matrixCompMult<matType, T, P, detail::is_aligned<P>::value>::call(x, y);
	}

	template<typename T, precision P, template <typename, precision> class vecTypeA, template <typename, precision> class vecTypeB>
	GLM_FUNC_QUALIFIER typename detail::outerProduct_trait<T, P, vecTypeA, vecTypeB>::type outerProduct(vecTypeA<T, P> const & c, vecTypeB<T, P> const & r)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'outerProduct' only accept floating-point inputs");

		typename detail::outerProduct_trait<T, P, vecTypeA, vecTypeB>::type m(uninitialize);
=======
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<C, R, T, Q> matrixCompMult(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'matrixCompMult' only accept floating-point inputs");
		return detail::compute_matrixCompMult<C, R, T, Q, detail::is_aligned<Q>::value>::call(x, y);
	}

	template<length_t DA, length_t DB, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename detail::outerProduct_trait<DA, DB, T, Q>::type outerProduct(vec<DA, T, Q> const& c, vec<DB, T, Q> const& r)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'outerProduct' only accept floating-point inputs");

		typename detail::outerProduct_trait<DA, DB, T, Q>::type m;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		for(length_t i = 0; i < m.length(); ++i)
			m[i] = c * r[i];
		return m;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class matType>
	GLM_FUNC_QUALIFIER typename matType<T, P>::transpose_type transpose(matType<T, P> const & m)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'transpose' only accept floating-point inputs");
		return detail::compute_transpose<matType, T, P, detail::is_aligned<P>::value>::call(m);
	}

	template <typename T, precision P, template <typename, precision> class matType>
	GLM_FUNC_QUALIFIER T determinant(matType<T, P> const & m)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'determinant' only accept floating-point inputs");
		return detail::compute_determinant<matType, T, P, detail::is_aligned<P>::value>::call(m);
	}

	template <typename T, precision P, template <typename, precision> class matType>
	GLM_FUNC_QUALIFIER matType<T, P> inverse(matType<T, P> const & m)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'inverse' only accept floating-point inputs");
		return detail::compute_inverse<matType, T, P, detail::is_aligned<P>::value>::call(m);
	}
}//namespace glm

#if GLM_ARCH != GLM_ARCH_PURE && GLM_HAS_UNRESTRICTED_UNIONS
=======
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<C, R, T, Q>::transpose_type transpose(mat<C, R, T, Q> const& m)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'transpose' only accept floating-point inputs");
		return detail::compute_transpose<C, R, T, Q, detail::is_aligned<Q>::value>::call(m);
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T determinant(mat<C, R, T, Q> const& m)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'determinant' only accept floating-point inputs");
		return detail::compute_determinant<C, R, T, Q, detail::is_aligned<Q>::value>::call(m);
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<C, R, T, Q> inverse(mat<C, R, T, Q> const& m)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'inverse' only accept floating-point inputs");
		return detail::compute_inverse<C, R, T, Q, detail::is_aligned<Q>::value>::call(m);
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	include "func_matrix_simd.inl"
#endif

