// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
// defined $HDRTYPE && defined $HDRENABLED && !$HDRTYPE && $HDRENABLED
// defined $PIXELFOGTYPE && defined $WRITEWATERFOGTODESTALPHA && ( $PIXELFOGTYPE != 1 ) && $WRITEWATERFOGTODESTALPHA
// defined $LIGHTING_PREVIEW && defined $HDRTYPE && $LIGHTING_PREVIEW && $HDRTYPE != 0
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPTINT && $LIGHTING_PREVIEW && $FASTPATHENVMAPTINT
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPCONTRAST && $LIGHTING_PREVIEW && $FASTPATHENVMAPCONTRAST
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH
// ($FLASHLIGHT || $FLASHLIGHTSHADOWS) && $LIGHTING_PREVIEW

#pragma once
#include "shaderlib/cshader.h"
class colorcorrection_ps20b_Static_Index
{
	unsigned int m_nCONVERT_TO_SRGB : 2;
public:
	void SetCONVERT_TO_SRGB( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nCONVERT_TO_SRGB = i;
	}

	colorcorrection_ps20b_Static_Index( IShaderShadow* pShaderShadow, IMaterialVar** params )
	{
		m_nCONVERT_TO_SRGB = g_pHardwareConfig->NeedsShaderSRGBConversion();
	}

	int GetIndex() const
	{
		return ( 5 * m_nCONVERT_TO_SRGB ) + 0;
	}
};

#define shaderStaticTest_colorcorrection_ps20b 1


class colorcorrection_ps20b_Dynamic_Index
{
	unsigned int m_nNUM_LOOKUPS : 3;
#ifdef _DEBUG
	bool m_bNUM_LOOKUPS : 1;
#endif	// _DEBUG
public:
	void SetNUM_LOOKUPS( int i )
	{
		Assert( i >= 0 && i <= 4 );
		m_nNUM_LOOKUPS = i;
#ifdef _DEBUG
		m_bNUM_LOOKUPS = true;
#endif	// _DEBUG
	}

	colorcorrection_ps20b_Dynamic_Index( IShaderDynamicAPI* pShaderAPI )
	{
		m_nNUM_LOOKUPS = 0;
#ifdef _DEBUG
		m_bNUM_LOOKUPS = false;
#endif	// _DEBUG
	}

	int GetIndex() const
	{
		Assert( m_bNUM_LOOKUPS );
		return ( 1 * m_nNUM_LOOKUPS ) + 0;
	}
};

#define shaderDynamicTest_colorcorrection_ps20b psh_forgot_to_set_dynamic_NUM_LOOKUPS

