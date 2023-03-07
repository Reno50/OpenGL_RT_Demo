/// @ref gtx_color_space
<<<<<<< HEAD
/// @file glm/gtx/color_space.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> rgbColor(const tvec3<T, P>& hsvColor)
	{
		tvec3<T, P> hsv = hsvColor;
		tvec3<T, P> rgbColor;

		if(hsv.y == static_cast<T>(0))
			// achromatic (grey)
			rgbColor = tvec3<T, P>(hsv.z);
		else
		{
			T sector = floor(hsv.x / T(60));
			T frac = (hsv.x / T(60)) - sector;
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> rgbColor(const vec<3, T, Q>& hsvColor)
	{
		vec<3, T, Q> hsv = hsvColor;
		vec<3, T, Q> rgbColor;

		if(hsv.y == static_cast<T>(0))
			// achromatic (grey)
			rgbColor = vec<3, T, Q>(hsv.z);
		else
		{
			T sector = floor(hsv.x * (T(1) / T(60)));
			T frac = (hsv.x * (T(1) / T(60))) - sector;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			// factorial part of h
			T o = hsv.z * (T(1) - hsv.y);
			T p = hsv.z * (T(1) - hsv.y * frac);
			T q = hsv.z * (T(1) - hsv.y * (T(1) - frac));

			switch(int(sector))
			{
			default:
			case 0:
				rgbColor.r = hsv.z;
				rgbColor.g = q;
				rgbColor.b = o;
				break;
			case 1:
				rgbColor.r = p;
				rgbColor.g = hsv.z;
				rgbColor.b = o;
				break;
			case 2:
				rgbColor.r = o;
				rgbColor.g = hsv.z;
				rgbColor.b = q;
				break;
			case 3:
				rgbColor.r = o;
				rgbColor.g = p;
				rgbColor.b = hsv.z;
				break;
			case 4:
<<<<<<< HEAD
				rgbColor.r = q; 
				rgbColor.g = o; 
				rgbColor.b = hsv.z;
				break;
			case 5:
				rgbColor.r = hsv.z; 
				rgbColor.g = o; 
=======
				rgbColor.r = q;
				rgbColor.g = o;
				rgbColor.b = hsv.z;
				break;
			case 5:
				rgbColor.r = hsv.z;
				rgbColor.g = o;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
				rgbColor.b = p;
				break;
			}
		}

		return rgbColor;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> hsvColor(const tvec3<T, P>& rgbColor)
	{
		tvec3<T, P> hsv = rgbColor;
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> hsvColor(const vec<3, T, Q>& rgbColor)
	{
		vec<3, T, Q> hsv = rgbColor;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		float Min   = min(min(rgbColor.r, rgbColor.g), rgbColor.b);
		float Max   = max(max(rgbColor.r, rgbColor.g), rgbColor.b);
		float Delta = Max - Min;

<<<<<<< HEAD
		hsv.z = Max;                               

		if(Max != static_cast<T>(0))
		{
			hsv.y = Delta / hsv.z;    
=======
		hsv.z = Max;

		if(Max != static_cast<T>(0))
		{
			hsv.y = Delta / hsv.z;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			T h = static_cast<T>(0);

			if(rgbColor.r == Max)
				// between yellow & magenta
				h = static_cast<T>(0) + T(60) * (rgbColor.g - rgbColor.b) / Delta;
			else if(rgbColor.g == Max)
				// between cyan & yellow
				h = static_cast<T>(120) + T(60) * (rgbColor.b - rgbColor.r) / Delta;
			else
				// between magenta & cyan
				h = static_cast<T>(240) + T(60) * (rgbColor.r - rgbColor.g) / Delta;

<<<<<<< HEAD
			if(h < T(0)) 
=======
			if(h < T(0))
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
				hsv.x = h + T(360);
			else
				hsv.x = h;
		}
		else
		{
			// If r = g = b = 0 then s = 0, h is undefined
			hsv.y = static_cast<T>(0);
			hsv.x = static_cast<T>(0);
		}

		return hsv;
	}

<<<<<<< HEAD
	template <typename T>
	GLM_FUNC_QUALIFIER tmat4x4<T, defaultp> saturation(T const s)
	{
		tvec3<T, defaultp> rgbw = tvec3<T, defaultp>(T(0.2126), T(0.7152), T(0.0722));

		tvec3<T, defaultp> const col((T(1) - s) * rgbw);

		tmat4x4<T, defaultp> result(T(1));
=======
	template<typename T>
	GLM_FUNC_QUALIFIER mat<4, 4, T, defaultp> saturation(T const s)
	{
		vec<3, T, defaultp> rgbw = vec<3, T, defaultp>(T(0.2126), T(0.7152), T(0.0722));

		vec<3, T, defaultp> const col((T(1) - s) * rgbw);

		mat<4, 4, T, defaultp> result(T(1));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		result[0][0] = col.x + s;
		result[0][1] = col.x;
		result[0][2] = col.x;
		result[1][0] = col.y;
		result[1][1] = col.y + s;
		result[1][2] = col.y;
		result[2][0] = col.z;
		result[2][1] = col.z;
		result[2][2] = col.z + s;
<<<<<<< HEAD
		return result;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> saturation(const T s, const tvec3<T, P>& color)
	{
		return tvec3<T, P>(saturation(s) * tvec4<T, P>(color, T(0)));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> saturation(const T s, const tvec4<T, P>& color)
=======

		return result;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> saturation(const T s, const vec<3, T, Q>& color)
	{
		return vec<3, T, Q>(saturation(s) * vec<4, T, Q>(color, T(0)));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, T, Q> saturation(const T s, const vec<4, T, Q>& color)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return saturation(s) * color;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER T luminosity(const tvec3<T, P>& color)
	{
		const tvec3<T, P> tmp = tvec3<T, P>(0.33, 0.59, 0.11);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T luminosity(const vec<3, T, Q>& color)
	{
		const vec<3, T, Q> tmp = vec<3, T, Q>(0.33, 0.59, 0.11);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		return dot(color, tmp);
	}
}//namespace glm
