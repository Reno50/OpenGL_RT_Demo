/// @ref gtx_scalar_relational
<<<<<<< HEAD
/// @file glm/gtx/scalar_relational.inl

namespace glm
{
	template <typename T>
	GLM_FUNC_QUALIFIER bool lessThan
	(
		T const & x, 
		T const & y
=======

namespace glm
{
	template<typename T>
	GLM_FUNC_QUALIFIER bool lessThan
	(
		T const& x,
		T const& y
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return x < y;
	}

<<<<<<< HEAD
	template <typename T>
	GLM_FUNC_QUALIFIER bool lessThanEqual
	(
		T const & x, 
		T const & y
=======
	template<typename T>
	GLM_FUNC_QUALIFIER bool lessThanEqual
	(
		T const& x,
		T const& y
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return x <= y;
	}

<<<<<<< HEAD
	template <typename T>
	GLM_FUNC_QUALIFIER bool greaterThan
	(
		T const & x, 
		T const & y
=======
	template<typename T>
	GLM_FUNC_QUALIFIER bool greaterThan
	(
		T const& x,
		T const& y
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return x > y;
	}

<<<<<<< HEAD
	template <typename T>
	GLM_FUNC_QUALIFIER bool greaterThanEqual
	(
		T const & x, 
		T const & y
=======
	template<typename T>
	GLM_FUNC_QUALIFIER bool greaterThanEqual
	(
		T const& x,
		T const& y
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return x >= y;
	}

<<<<<<< HEAD
	template <typename T>
	GLM_FUNC_QUALIFIER bool equal
	(
		T const & x, 
		T const & y
	)
	{
		return x == y;
	}

	template <typename T>
	GLM_FUNC_QUALIFIER bool notEqual
	(
		T const & x, 
		T const & y
	)
	{
		return x != y;
=======
	template<typename T>
	GLM_FUNC_QUALIFIER bool equal
	(
		T const& x,
		T const& y
	)
	{
		return detail::compute_equal<T, std::numeric_limits<T>::is_iec559>::call(x, y);
	}

	template<typename T>
	GLM_FUNC_QUALIFIER bool notEqual
	(
		T const& x,
		T const& y
	)
	{
		return !detail::compute_equal<T, std::numeric_limits<T>::is_iec559>::call(x, y);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	GLM_FUNC_QUALIFIER bool any
	(
<<<<<<< HEAD
		bool const & x
=======
		bool const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return x;
	}

	GLM_FUNC_QUALIFIER bool all
	(
<<<<<<< HEAD
		bool const & x
=======
		bool const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return x;
	}

	GLM_FUNC_QUALIFIER bool not_
	(
<<<<<<< HEAD
		bool const & x
=======
		bool const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return !x;
	}
}//namespace glm
