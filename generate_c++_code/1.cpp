const char* enumToString(PIXEL_FORMAT_E enumVar){
	switch (enumVar)
	{
		case PIXEL_FORMAT_RGB_444=0:
			return "PIXEL_FORMAT_RGB_444=0";
			break;
		case PIXEL_FORMAT_RGB_555:
			return "PIXEL_FORMAT_RGB_555";
			break;
		case PIXEL_FORMAT_RGB_565:
			return "PIXEL_FORMAT_RGB_565";
			break;
		case PIXEL_FORMAT_RGB_888:
			return "PIXEL_FORMAT_RGB_888";
			break;
		case PIXEL_FORMAT_BGR_444:
			return "PIXEL_FORMAT_BGR_444";
			break;
		case PIXEL_FORMAT_BGR_555:
			return "PIXEL_FORMAT_BGR_555";
			break;
		case PIXEL_FORMAT_BGR_565:
			return "PIXEL_FORMAT_BGR_565";
			break;
		case PIXEL_FORMAT_BGR_888:
			return "PIXEL_FORMAT_BGR_888";
			break;
		case PIXEL_FORMAT_ARGB_1555:
			return "PIXEL_FORMAT_ARGB_1555";
			break;
		case PIXEL_FORMAT_ARGB_4444:
			return "PIXEL_FORMAT_ARGB_4444";
			break;
		case PIXEL_FORMAT_ARGB_8565:
			return "PIXEL_FORMAT_ARGB_8565";
			break;
		case PIXEL_FORMAT_ARGB_8888:
			return "PIXEL_FORMAT_ARGB_8888";
			break;
		case PIXEL_FORMAT_ARGB_2BPP:
			return "PIXEL_FORMAT_ARGB_2BPP";
			break;
		case PIXEL_FORMAT_ABGR_1555:
			return "PIXEL_FORMAT_ABGR_1555";
			break;
		case PIXEL_FORMAT_ABGR_4444:
			return "PIXEL_FORMAT_ABGR_4444";
			break;
		case PIXEL_FORMAT_ABGR_8565:
			return "PIXEL_FORMAT_ABGR_8565";
			break;
		case PIXEL_FORMAT_ABGR_8888:
			return "PIXEL_FORMAT_ABGR_8888";
			break;
		case PIXEL_FORMAT_RGB_BAYER_8BPP:
			return "PIXEL_FORMAT_RGB_BAYER_8BPP";
			break;
		case PIXEL_FORMAT_RGB_BAYER_10BPP:
			return "PIXEL_FORMAT_RGB_BAYER_10BPP";
			break;
		case PIXEL_FORMAT_RGB_BAYER_12BPP:
			return "PIXEL_FORMAT_RGB_BAYER_12BPP";
			break;
		case PIXEL_FORMAT_RGB_BAYER_14BPP:
			return "PIXEL_FORMAT_RGB_BAYER_14BPP";
			break;
		case PIXEL_FORMAT_RGB_BAYER_16BPP:
			return "PIXEL_FORMAT_RGB_BAYER_16BPP";
			break;
		case PIXEL_FORMAT_YVU_PLANAR_422:
			return "PIXEL_FORMAT_YVU_PLANAR_422";
			break;
		case PIXEL_FORMAT_YVU_PLANAR_420:
			return "PIXEL_FORMAT_YVU_PLANAR_420";
			break;
		case PIXEL_FORMAT_YVU_PLANAR_444:
			return "PIXEL_FORMAT_YVU_PLANAR_444";
			break;
		case PIXEL_FORMAT_YVU_SEMIPLANAR_422:
			return "PIXEL_FORMAT_YVU_SEMIPLANAR_422";
			break;
		case PIXEL_FORMAT_YVU_SEMIPLANAR_420:
			return "PIXEL_FORMAT_YVU_SEMIPLANAR_420";
			break;
		case PIXEL_FORMAT_YVU_SEMIPLANAR_444:
			return "PIXEL_FORMAT_YVU_SEMIPLANAR_444";
			break;
		case PIXEL_FORMAT_YUV_SEMIPLANAR_422:
			return "PIXEL_FORMAT_YUV_SEMIPLANAR_422";
			break;
		case PIXEL_FORMAT_YUV_SEMIPLANAR_420:
			return "PIXEL_FORMAT_YUV_SEMIPLANAR_420";
			break;
		case PIXEL_FORMAT_YUV_SEMIPLANAR_444:
			return "PIXEL_FORMAT_YUV_SEMIPLANAR_444";
			break;
		case PIXEL_FORMAT_YUYV_PACKAGE_422:
			return "PIXEL_FORMAT_YUYV_PACKAGE_422";
			break;
		case PIXEL_FORMAT_YVYU_PACKAGE_422:
			return "PIXEL_FORMAT_YVYU_PACKAGE_422";
			break;
		case PIXEL_FORMAT_UYVY_PACKAGE_422:
			return "PIXEL_FORMAT_UYVY_PACKAGE_422";
			break;
		case PIXEL_FORMAT_VYUY_PACKAGE_422:
			return "PIXEL_FORMAT_VYUY_PACKAGE_422";
			break;
		case PIXEL_FORMAT_YYUV_PACKAGE_422:
			return "PIXEL_FORMAT_YYUV_PACKAGE_422";
			break;
		case PIXEL_FORMAT_YYVU_PACKAGE_422:
			return "PIXEL_FORMAT_YYVU_PACKAGE_422";
			break;
		case PIXEL_FORMAT_UVYY_PACKAGE_422:
			return "PIXEL_FORMAT_UVYY_PACKAGE_422";
			break;
		case PIXEL_FORMAT_VUYY_PACKAGE_422:
			return "PIXEL_FORMAT_VUYY_PACKAGE_422";
			break;
		case PIXEL_FORMAT_VY1UY0_PACKAGE_422:
			return "PIXEL_FORMAT_VY1UY0_PACKAGE_422";
			break;
		case PIXEL_FORMAT_YUV_400:
			return "PIXEL_FORMAT_YUV_400";
			break;
		case PIXEL_FORMAT_UV_420:
			return "PIXEL_FORMAT_UV_420";
			break;
		case /*SVPdataformat*/PIXEL_FORMAT_BGR_888_PLANAR:
			return "/*SVPdataformat*/PIXEL_FORMAT_BGR_888_PLANAR";
			break;
		case PIXEL_FORMAT_HSV_888_PACKAGE:
			return "PIXEL_FORMAT_HSV_888_PACKAGE";
			break;
		case PIXEL_FORMAT_HSV_888_PLANAR:
			return "PIXEL_FORMAT_HSV_888_PLANAR";
			break;
		case PIXEL_FORMAT_LAB_888_PACKAGE:
			return "PIXEL_FORMAT_LAB_888_PACKAGE";
			break;
		case PIXEL_FORMAT_LAB_888_PLANAR:
			return "PIXEL_FORMAT_LAB_888_PLANAR";
			break;
		case PIXEL_FORMAT_S8C1:
			return "PIXEL_FORMAT_S8C1";
			break;
		case PIXEL_FORMAT_S8C2_PACKAGE:
			return "PIXEL_FORMAT_S8C2_PACKAGE";
			break;
		case PIXEL_FORMAT_S8C2_PLANAR:
			return "PIXEL_FORMAT_S8C2_PLANAR";
			break;
		case PIXEL_FORMAT_S8C3_PLANAR:
			return "PIXEL_FORMAT_S8C3_PLANAR";
			break;
		case PIXEL_FORMAT_S16C1:
			return "PIXEL_FORMAT_S16C1";
			break;
		case PIXEL_FORMAT_U8C1:
			return "PIXEL_FORMAT_U8C1";
			break;
		case PIXEL_FORMAT_U16C1:
			return "PIXEL_FORMAT_U16C1";
			break;
		case PIXEL_FORMAT_S32C1:
			return "PIXEL_FORMAT_S32C1";
			break;
		case PIXEL_FORMAT_U32C1:
			return "PIXEL_FORMAT_U32C1";
			break;
		case PIXEL_FORMAT_U64C1:
			return "PIXEL_FORMAT_U64C1";
			break;
		case PIXEL_FORMAT_S64C1:
			return "PIXEL_FORMAT_S64C1";
			break;
		case PIXEL_FORMAT_BUTT:
			return "PIXEL_FORMAT_BUTT";
			break;
	}
}
