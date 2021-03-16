#pragma once

//�R�����g�A�E�g�Fdll�쐬���[�h�A�R�����g�Fdebug���[�hmain�֐��K�v
//����ɍ��킹�āA�v���W�F�N�g�̃v���p�e�B�̍\���̎�ނ�exe��dll�ɐ؂�ւ���K�v����

//#define DEBUG_MODE 

#ifdef DEBUG_MODE
#define UNITY_INTERFACE_API  
#define UNITY_INTERFACE_EXPORT  
#else
#define UNITY_INTERFACE_API __stdcall
#define UNITY_INTERFACE_EXPORT __declspec(dllexport)
#endif

//�o�͂���֐�
#ifndef DEBUG_MODE
extern "C"
{
#endif

// API for Unity
	UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API OpenController();
	UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API CloseController();
	UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API GetSliderValue(float* out_array, int first_idx = -1, int last_idx = -1);
	UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API GetKnobValue(float* out_array, int first_idx = -1, int last_idx = -1);
	UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API GetButtonState(int* out_array, int first_idx = -1, int last_idx = -1);
	UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API GetSystemButtonState(int* out_array, int first_idx = -1, int last_idx = -1);
	UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API GetSystemButtonStateWithName(int* out_array, const char* name);
	UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API SetButtonOnInterval(int msec);

#ifndef DEBUG_MODE
}
#endif