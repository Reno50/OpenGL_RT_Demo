/// @ref gtx_matrix_query
<<<<<<< HEAD
/// @file glm/gtx/matrix_query.inl

namespace glm
{
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull(tmat2x2<T, P> const & m, T const & epsilon)
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool isNull(mat<2, 2, T, Q> const& m, T const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		bool result = true;
		for(length_t i = 0; result && i < m.length() ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull(tmat3x3<T, P> const & m, T const & epsilon)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool isNull(mat<3, 3, T, Q> const& m, T const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		bool result = true;
		for(length_t i = 0; result && i < m.length() ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNull(tmat4x4<T, P> const & m, T const & epsilon)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool isNull(mat<4, 4, T, Q> const& m, T const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		bool result = true;
		for(length_t i = 0; result && i < m.length() ; ++i)
			result = isNull(m[i], epsilon);
		return result;
	}

<<<<<<< HEAD
	template<typename T, precision P, template <typename, precision> class matType>
	GLM_FUNC_QUALIFIER bool isIdentity(matType<T, P> const & m, T const & epsilon)
=======
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool isIdentity(mat<C, R, T, Q> const& m, T const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		bool result = true;
		for(length_t i = 0; result && i < m[0].length() ; ++i)
		{
			for(length_t j = 0; result && j < i ; ++j)
				result = abs(m[i][j]) <= epsilon;
			if(result)
				result = abs(m[i][i] - 1) <= epsilon;
			for(length_t j = i + 1; result && j < m.length(); ++j)
				result = abs(m[i][j]) <= epsilon;
		}
		return result;
	}

<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNormalized(tmat2x2<T, P> const & m, T const & epsilon)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool isNormalized(mat<2, 2, T, Q> const& m, T const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		bool result(true);
		for(length_t i = 0; result && i < m.length(); ++i)
			result = isNormalized(m[i], epsilon);
		for(length_t i = 0; result && i < m.length(); ++i)
		{
<<<<<<< HEAD
			typename tmat2x2<T, P>::col_type v;
=======
			typename mat<2, 2, T, Q>::col_type v;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			for(length_t j = 0; j < m.length(); ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNormalized(tmat3x3<T, P> const & m, T const & epsilon)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool isNormalized(mat<3, 3, T, Q> const& m, T const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		bool result(true);
		for(length_t i = 0; result && i < m.length(); ++i)
			result = isNormalized(m[i], epsilon);
		for(length_t i = 0; result && i < m.length(); ++i)
		{
<<<<<<< HEAD
			typename tmat3x3<T, P>::col_type v;
=======
			typename mat<3, 3, T, Q>::col_type v;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			for(length_t j = 0; j < m.length(); ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_QUALIFIER bool isNormalized(tmat4x4<T, P> const & m, T const & epsilon)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool isNormalized(mat<4, 4, T, Q> const& m, T const& epsilon)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		bool result(true);
		for(length_t i = 0; result && i < m.length(); ++i)
			result = isNormalized(m[i], epsilon);
		for(length_t i = 0; result && i < m.length(); ++i)
		{
<<<<<<< HEAD
			typename tmat4x4<T, P>::col_type v;
=======
			typename mat<4, 4, T, Q>::col_type v;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			for(length_t j = 0; j < m.length(); ++j)
				v[j] = m[j][i];
			result = isNormalized(v, epsilon);
		}
		return result;
	}

<<<<<<< HEAD
	template<typename T, precision P, template <typename, precision> class matType>
	GLM_FUNC_QUALIFIER bool isOrthogonal(matType<T, P> const & m, T const & epsilon)
	{
		bool result(true);
=======
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool isOrthogonal(mat<C, R, T, Q> const& m, T const& epsilon)
	{
		bool result = true;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		for(length_t i(0); result && i < m.length() - 1; ++i)
		for(length_t j(i + 1); result && j < m.length(); ++j)
			result = areOrthogonal(m[i], m[j], epsilon);

		if(result)
		{
<<<<<<< HEAD
			matType<T, P> tmp = transpose(m);
=======
			mat<C, R, T, Q> tmp = transpose(m);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			for(length_t i(0); result && i < m.length() - 1 ; ++i)
			for(length_t j(i + 1); result && j < m.length(); ++j)
				result = areOrthogonal(tmp[i], tmp[j], epsilon);
		}
		return result;
	}
}//namespace glm
