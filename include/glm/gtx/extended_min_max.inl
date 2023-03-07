/// @ref gtx_extended_min_max
<<<<<<< HEAD
/// @file glm/gtx/extended_min_max.inl

namespace glm
{
	template <typename T>
	GLM_FUNC_QUALIFIER T min(
		T const & x, 
		T const & y, 
		T const & z)
=======

namespace glm
{
	template<typename T>
	GLM_FUNC_QUALIFIER T min(
		T const& x,
		T const& y,
		T const& z)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return glm::min(glm::min(x, y), z);
	}

<<<<<<< HEAD
	template <typename T, template <typename> class C>
	GLM_FUNC_QUALIFIER C<T> min
	(
		C<T> const & x, 
		typename C<T>::T const & y, 
		typename C<T>::T const & z
=======
	template<typename T, template<typename> class C>
	GLM_FUNC_QUALIFIER C<T> min
	(
		C<T> const& x,
		typename C<T>::T const& y,
		typename C<T>::T const& z
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::min(glm::min(x, y), z);
	}

<<<<<<< HEAD
	template <typename T, template <typename> class C>
	GLM_FUNC_QUALIFIER C<T> min
	(
		C<T> const & x, 
		C<T> const & y, 
		C<T> const & z
=======
	template<typename T, template<typename> class C>
	GLM_FUNC_QUALIFIER C<T> min
	(
		C<T> const& x,
		C<T> const& y,
		C<T> const& z
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::min(glm::min(x, y), z);
	}

<<<<<<< HEAD
	template <typename T>
	GLM_FUNC_QUALIFIER T min
	(
		T const & x, 
		T const & y, 
		T const & z, 
		T const & w
=======
	template<typename T>
	GLM_FUNC_QUALIFIER T min
	(
		T const& x,
		T const& y,
		T const& z,
		T const& w
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::min(glm::min(x, y), glm::min(z, w));
	}

<<<<<<< HEAD
	template <typename T, template <typename> class C>
	GLM_FUNC_QUALIFIER C<T> min
	(
		C<T> const & x, 
		typename C<T>::T const & y, 
		typename C<T>::T const & z, 
		typename C<T>::T const & w
=======
	template<typename T, template<typename> class C>
	GLM_FUNC_QUALIFIER C<T> min
	(
		C<T> const& x,
		typename C<T>::T const& y,
		typename C<T>::T const& z,
		typename C<T>::T const& w
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::min(glm::min(x, y), glm::min(z, w));
	}

<<<<<<< HEAD
	template <typename T, template <typename> class C>
	GLM_FUNC_QUALIFIER C<T> min
	(
		C<T> const & x, 
		C<T> const & y, 
		C<T> const & z, 
		C<T> const & w
=======
	template<typename T, template<typename> class C>
	GLM_FUNC_QUALIFIER C<T> min
	(
		C<T> const& x,
		C<T> const& y,
		C<T> const& z,
		C<T> const& w
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::min(glm::min(x, y), glm::min(z, w));
	}

<<<<<<< HEAD
	template <typename T>
	GLM_FUNC_QUALIFIER T max(
		T const & x, 
		T const & y, 
		T const & z)
=======
	template<typename T>
	GLM_FUNC_QUALIFIER T max(
		T const& x,
		T const& y,
		T const& z)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return glm::max(glm::max(x, y), z);
	}

<<<<<<< HEAD
	template <typename T, template <typename> class C>
	GLM_FUNC_QUALIFIER C<T> max
	(
		C<T> const & x, 
		typename C<T>::T const & y, 
		typename C<T>::T const & z
=======
	template<typename T, template<typename> class C>
	GLM_FUNC_QUALIFIER C<T> max
	(
		C<T> const& x,
		typename C<T>::T const& y,
		typename C<T>::T const& z
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::max(glm::max(x, y), z);
	}

<<<<<<< HEAD
	template <typename T, template <typename> class C>
	GLM_FUNC_QUALIFIER C<T> max
	(
		C<T> const & x, 
		C<T> const & y, 
		C<T> const & z
=======
	template<typename T, template<typename> class C>
	GLM_FUNC_QUALIFIER C<T> max
	(
		C<T> const& x,
		C<T> const& y,
		C<T> const& z
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::max(glm::max(x, y), z);
	}

<<<<<<< HEAD
	template <typename T>
	GLM_FUNC_QUALIFIER T max
	(
		T const & x, 
		T const & y, 
		T const & z, 
		T const & w
=======
	template<typename T>
	GLM_FUNC_QUALIFIER T max
	(
		T const& x,
		T const& y,
		T const& z,
		T const& w
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::max(glm::max(x, y), glm::max(z, w));
	}

<<<<<<< HEAD
	template <typename T, template <typename> class C>
	GLM_FUNC_QUALIFIER C<T> max
	(
		C<T> const & x, 
		typename C<T>::T const & y, 
		typename C<T>::T const & z, 
		typename C<T>::T const & w
=======
	template<typename T, template<typename> class C>
	GLM_FUNC_QUALIFIER C<T> max
	(
		C<T> const& x,
		typename C<T>::T const& y,
		typename C<T>::T const& z,
		typename C<T>::T const& w
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::max(glm::max(x, y), glm::max(z, w));
	}

<<<<<<< HEAD
	template <typename T, template <typename> class C>
	GLM_FUNC_QUALIFIER C<T> max
	(
		C<T> const & x, 
		C<T> const & y, 
		C<T> const & z, 
		C<T> const & w
=======
	template<typename T, template<typename> class C>
	GLM_FUNC_QUALIFIER C<T> max
	(
		C<T> const& x,
		C<T> const& y,
		C<T> const& z,
		C<T> const& w
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return glm::max(glm::max(x, y), glm::max(z, w));
	}
<<<<<<< HEAD

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
}//namespace glm
