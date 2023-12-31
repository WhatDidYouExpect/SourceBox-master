// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
// ( STRIPES == 0 ) &&  ( STRIPES_USE_NORMAL2 == 1 )
// ( EFFECT == 2 || EFFECT == 3 ) && ( VERTEXCOLOR == 1 || HALFLAMBERT == 1 || VERTEX_LIT == 1 || FULLBRIGHT == 1 || USE_STATIC_CONTROL_FLOW == 1 || BASETEXTURE2 == 1 || STRIPES == 1 || STRIPES_USE_NORMAL2 == 1 )
// ( EFFECT == 2 || EFFECT == 3 ) && ( SKINNING == 1 || DYNAMIC_LIGHT == 1 || STATIC_LIGHT == 1 || NUM_LIGHTS != 0 )
// ( FULLBRIGHT == 1 ) &&  ( VERTEX_LIT == 0 || DYNAMIC_LIGHT == 1 || STATIC_LIGHT == 1 || NUM_LIGHTS != 0 )
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH

#pragma once
#include "shaderlib/cshader.h"
class pyro_vision_vs20_Static_Index
{
	unsigned int m_nEFFECT : 3;
	unsigned int m_nVERTEXCOLOR : 2;
	unsigned int m_nHALFLAMBERT : 2;
	unsigned int m_nVERTEX_LIT : 2;
	unsigned int m_nFULLBRIGHT : 2;
	unsigned int m_nUSE_STATIC_CONTROL_FLOW : 2;
	unsigned int m_nBASETEXTURE2 : 2;
	unsigned int m_nSTRIPES : 2;
	unsigned int m_nSTRIPES_USE_NORMAL2 : 2;
#ifdef _DEBUG
	bool m_bEFFECT : 1;
	bool m_bVERTEXCOLOR : 1;
	bool m_bHALFLAMBERT : 1;
	bool m_bVERTEX_LIT : 1;
	bool m_bFULLBRIGHT : 1;
	bool m_bUSE_STATIC_CONTROL_FLOW : 1;
	bool m_bBASETEXTURE2 : 1;
	bool m_bSTRIPES : 1;
	bool m_bSTRIPES_USE_NORMAL2 : 1;
#endif	// _DEBUG
public:
	void SetEFFECT( int i )
	{
		Assert( i >= 0 && i <= 3 );
		m_nEFFECT = i;
#ifdef _DEBUG
		m_bEFFECT = true;
#endif	// _DEBUG
	}

	void SetVERTEXCOLOR( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nVERTEXCOLOR = i;
#ifdef _DEBUG
		m_bVERTEXCOLOR = true;
#endif	// _DEBUG
	}

	void SetHALFLAMBERT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nHALFLAMBERT = i;
#ifdef _DEBUG
		m_bHALFLAMBERT = true;
#endif	// _DEBUG
	}

	void SetVERTEX_LIT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nVERTEX_LIT = i;
#ifdef _DEBUG
		m_bVERTEX_LIT = true;
#endif	// _DEBUG
	}

	void SetFULLBRIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFULLBRIGHT = i;
#ifdef _DEBUG
		m_bFULLBRIGHT = true;
#endif	// _DEBUG
	}

	void SetUSE_STATIC_CONTROL_FLOW( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nUSE_STATIC_CONTROL_FLOW = i;
#ifdef _DEBUG
		m_bUSE_STATIC_CONTROL_FLOW = true;
#endif	// _DEBUG
	}

	void SetBASETEXTURE2( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nBASETEXTURE2 = i;
#ifdef _DEBUG
		m_bBASETEXTURE2 = true;
#endif	// _DEBUG
	}

	void SetSTRIPES( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSTRIPES = i;
#ifdef _DEBUG
		m_bSTRIPES = true;
#endif	// _DEBUG
	}

	void SetSTRIPES_USE_NORMAL2( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSTRIPES_USE_NORMAL2 = i;
#ifdef _DEBUG
		m_bSTRIPES_USE_NORMAL2 = true;
#endif	// _DEBUG
	}

	pyro_vision_vs20_Static_Index( IShaderShadow* pShaderShadow, IMaterialVar** params )
	{
		m_nEFFECT = 0;
		m_nVERTEXCOLOR = 0;
		m_nHALFLAMBERT = 0;
		m_nVERTEX_LIT = 0;
		m_nFULLBRIGHT = 0;
		m_nUSE_STATIC_CONTROL_FLOW = 0;
		m_nBASETEXTURE2 = 0;
		m_nSTRIPES = 0;
		m_nSTRIPES_USE_NORMAL2 = 0;
#ifdef _DEBUG
		m_bEFFECT = false;
		m_bVERTEXCOLOR = false;
		m_bHALFLAMBERT = false;
		m_bVERTEX_LIT = false;
		m_bFULLBRIGHT = false;
		m_bUSE_STATIC_CONTROL_FLOW = false;
		m_bBASETEXTURE2 = false;
		m_bSTRIPES = false;
		m_bSTRIPES_USE_NORMAL2 = false;
#endif	// _DEBUG
	}

	int GetIndex() const
	{
		Assert( m_bEFFECT && m_bVERTEXCOLOR && m_bHALFLAMBERT && m_bVERTEX_LIT && m_bFULLBRIGHT && m_bUSE_STATIC_CONTROL_FLOW && m_bBASETEXTURE2 && m_bSTRIPES && m_bSTRIPES_USE_NORMAL2 );
		return ( 48 * m_nEFFECT ) + ( 192 * m_nVERTEXCOLOR ) + ( 384 * m_nHALFLAMBERT ) + ( 768 * m_nVERTEX_LIT ) + ( 1536 * m_nFULLBRIGHT ) + ( 3072 * m_nUSE_STATIC_CONTROL_FLOW ) + ( 6144 * m_nBASETEXTURE2 ) + ( 12288 * m_nSTRIPES ) + ( 24576 * m_nSTRIPES_USE_NORMAL2 ) + 0;
	}
};

#define shaderStaticTest_pyro_vision_vs20 vsh_forgot_to_set_static_EFFECT + vsh_forgot_to_set_static_VERTEXCOLOR + vsh_forgot_to_set_static_HALFLAMBERT + vsh_forgot_to_set_static_VERTEX_LIT + vsh_forgot_to_set_static_FULLBRIGHT + vsh_forgot_to_set_static_USE_STATIC_CONTROL_FLOW + vsh_forgot_to_set_static_BASETEXTURE2 + vsh_forgot_to_set_static_STRIPES + vsh_forgot_to_set_static_STRIPES_USE_NORMAL2


class pyro_vision_vs20_Dynamic_Index
{
	unsigned int m_nCOMPRESSED_VERTS : 2;
	unsigned int m_nSKINNING : 2;
	unsigned int m_nDYNAMIC_LIGHT : 2;
	unsigned int m_nSTATIC_LIGHT : 2;
	unsigned int m_nNUM_LIGHTS : 2;
#ifdef _DEBUG
	bool m_bCOMPRESSED_VERTS : 1;
	bool m_bSKINNING : 1;
	bool m_bDYNAMIC_LIGHT : 1;
	bool m_bSTATIC_LIGHT : 1;
	bool m_bNUM_LIGHTS : 1;
#endif	// _DEBUG
public:
	void SetCOMPRESSED_VERTS( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nCOMPRESSED_VERTS = i;
#ifdef _DEBUG
		m_bCOMPRESSED_VERTS = true;
#endif	// _DEBUG
	}

	void SetSKINNING( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSKINNING = i;
#ifdef _DEBUG
		m_bSKINNING = true;
#endif	// _DEBUG
	}

	void SetDYNAMIC_LIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDYNAMIC_LIGHT = i;
#ifdef _DEBUG
		m_bDYNAMIC_LIGHT = true;
#endif	// _DEBUG
	}

	void SetSTATIC_LIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSTATIC_LIGHT = i;
#ifdef _DEBUG
		m_bSTATIC_LIGHT = true;
#endif	// _DEBUG
	}

	void SetNUM_LIGHTS( int i )
	{
		Assert( i >= 0 && i <= 2 );
		m_nNUM_LIGHTS = i;
#ifdef _DEBUG
		m_bNUM_LIGHTS = true;
#endif	// _DEBUG
	}

	pyro_vision_vs20_Dynamic_Index( IShaderDynamicAPI* pShaderAPI )
	{
		m_nCOMPRESSED_VERTS = 0;
		m_nSKINNING = 0;
		m_nDYNAMIC_LIGHT = 0;
		m_nSTATIC_LIGHT = 0;
		m_nNUM_LIGHTS = 0;
#ifdef _DEBUG
		m_bCOMPRESSED_VERTS = false;
		m_bSKINNING = false;
		m_bDYNAMIC_LIGHT = false;
		m_bSTATIC_LIGHT = false;
		m_bNUM_LIGHTS = false;
#endif	// _DEBUG
	}

	int GetIndex() const
	{
		Assert( m_bCOMPRESSED_VERTS && m_bSKINNING && m_bDYNAMIC_LIGHT && m_bSTATIC_LIGHT && m_bNUM_LIGHTS );
		return ( 1 * m_nCOMPRESSED_VERTS ) + ( 2 * m_nSKINNING ) + ( 4 * m_nDYNAMIC_LIGHT ) + ( 8 * m_nSTATIC_LIGHT ) + ( 16 * m_nNUM_LIGHTS ) + 0;
	}
};

#define shaderDynamicTest_pyro_vision_vs20 vsh_forgot_to_set_dynamic_COMPRESSED_VERTS + vsh_forgot_to_set_dynamic_SKINNING + vsh_forgot_to_set_dynamic_DYNAMIC_LIGHT + vsh_forgot_to_set_dynamic_STATIC_LIGHT + vsh_forgot_to_set_dynamic_NUM_LIGHTS

