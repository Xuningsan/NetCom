// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� IOCPCORE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// IOCPCORE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef IOCPCORE_EXPORTS
#define IOCPCORE_API __declspec(dllexport)
#else
#define IOCPCORE_API __declspec(dllimport)
#endif

// �����Ǵ� IOCPCore.dll ������
class IOCPCORE_API CIOCPCore {
public:
	CIOCPCore(void);
	// TODO:  �ڴ�������ķ�����
};

extern IOCPCORE_API int nIOCPCore;

IOCPCORE_API int fnIOCPCore(void);
