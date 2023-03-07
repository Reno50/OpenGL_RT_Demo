/// @ref gtc_matrix_access
<<<<<<< HEAD
/// @file glm/gtc/matrix_access.inl

namespace glm
{
	template <typename genType>
	GLM_FUNC_QUALIFIER genType row
	(
		genType const & m,
		length_t index,
		typename genType::row_type const & x
=======

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType row
	(
		genType const& m,
		length_t index,
		typename genType::row_type const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		assert(index >= 0 && index < m[0].length());

		genType Result = m;
		for(length_t i = 0; i < m.length(); ++i)
			Result[i][index] = x[i];
		return Result;
	}

<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER typename genType::row_type row
	(
		genType const & m,
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER typename genType::row_type row
	(
		genType const& m,
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		length_t index
	)
	{
		assert(index >= 0 && index < m[0].length());

<<<<<<< HEAD
		typename genType::row_type Result;
=======
		typename genType::row_type Result(0);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		for(length_t i = 0; i < m.length(); ++i)
			Result[i] = m[i][index];
		return Result;
	}

<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER genType column
	(
		genType const & m,
		length_t index,
		typename genType::col_type const & x
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER genType column
	(
		genType const& m,
		length_t index,
		typename genType::col_type const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		assert(index >= 0 && index < m.length());

		genType Result = m;
		Result[index] = x;
		return Result;
	}

<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER typename genType::col_type column
	(
		genType const & m,
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER typename genType::col_type column
	(
		genType const& m,
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		length_t index
	)
	{
		assert(index >= 0 && index < m.length());

		return m[index];
	}
}//namespace glm
