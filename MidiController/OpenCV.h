#pragma once
// �����J�[�̓��͂�ݒ�
// �f�o�b�O�ƃ����[�X�œ��͂���t�@�C�����قȂ�̂ł��̂悤�ɂ��Ă��܂��B
#ifdef _DEBUG
#define CV_EXT "d.lib"
#else
#define CV_EXT ".lib"
#endif
//#pragma comment(lib, "opencv_core451" CV_EXT) 
#pragma comment(lib, "opencv_world451" CV_EXT) 

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

