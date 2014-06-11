#if !defined(AFX_TCHART1_H__42D2EDDE_F248_4B4D_8E8D_ABA17EBE38CE__INCLUDED_)
#define AFX_TCHART1_H__42D2EDDE_F248_4B4D_8E8D_ABA17EBE38CE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CAxes1;
class CPen1;
class CScroll1;
class CSeries1;

/////////////////////////////////////////////////////////////////////////////
// CTChart1 wrapper class

class CTChart1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CTChart1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xb6c10489, 0xfb89, 0x11d4, { 0x93, 0xc9, 0x0, 0x60, 0x8, 0xa7, 0xee, 0xd4 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	LPDISPATCH GetAspect();
	CAxes1 GetAxis();
	LPDISPATCH GetCanvas();
	BOOL GetClipPoints();
	void SetClipPoints(BOOL bNewValue);
	short GetCursor();
	void SetCursor(short nNewValue);
	short GetDragCursor();
	void SetDragCursor(short nNewValue);
	long GetDragMode();
	void SetDragMode(long nNewValue);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	LPDISPATCH GetExport();
	LPDISPATCH GetFooter();
	CPen1 GetFrame();
	LPDISPATCH GetHeader();
	long GetHeight();
	void SetHeight(long nNewValue);
	LPDISPATCH GetImport();
	long GetLeft();
	void SetLeft(long nNewValue);
	LPDISPATCH GetLegend();
	LPDISPATCH GetPage();
	LPDISPATCH GetPanel();
	LPDISPATCH GetPrinter();
	CScroll1 GetScroll();
	long GetSeriesCount();
	long GetTop();
	void SetTop(long nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	LPDISPATCH GetWalls();
	long GetWidth();
	void SetWidth(long nNewValue);
	LPDISPATCH GetZoom();
	void AboutBox();
	long AddSeries(long SeriesClass);
	void ChangeSeriesType(long SeriesIndex, long NewSeriesType);
	long CloneSeries(long SourceSeriesIndex);
	void Draw(long DC, long Left, long Top, long Right, long Bottom);
	void ExchangeSeries(long Series1, long Series2);
	double GetDateTimeStep(long DateTimeStep);
	unsigned long GetFreeSeriesColor(BOOL CheckBackgroundColor);
	CSeries1 GetLabelsSeries(long DestAxis);
	BOOL IsFreeSeriesColor(unsigned long AColor, BOOL CheckBackgroundColor);
	void RemoveAllSeries();
	void RemoveSeries(long SeriesIndex);
	void Repaint();
	CString SeriesTitleLegend(long ASeriesIndex);
	void ShowEditor(long SeriesIndex);
	void StopMouse();
	BOOL GetTimerEnabled();
	void SetTimerEnabled(BOOL bNewValue);
	long GetTimerInterval();
	void SetTimerInterval(long nNewValue);
	BOOL GetAutoRepaint();
	void SetAutoRepaint(BOOL bNewValue);
	void EditOneSeries(long SeriesIndex);
	LPDISPATCH GetEnvironment();
	long GetChartLink();
	LPDISPATCH GetMousePosition();
	void ChartRect(long Left, long Top, long Right, long Bottom);
	LPDISPATCH GetTools();
	LPDISPATCH GetSubHeader();
	LPDISPATCH GetSubFooter();
	void ClearChart();
	void RefreshData();
	CSeries1 Series(long SeriesIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TCHART1_H__42D2EDDE_F248_4B4D_8E8D_ABA17EBE38CE__INCLUDED_)