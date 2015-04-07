/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, UIScrollView, UIView, WKWebView;

@interface WKPDFView : UIView <UIPDFPageViewDelegate, WKWebViewContentProvider> {
    unsigned int _centerPageNumber;
    UIView *_fixedOverlayView;
    BOOL _isStartingZoom;
    struct CGSize { 
        float width; 
        float height; 
    } _minimumSize;
    struct CGSize { 
        float width; 
        float height; 
    } _overlaidAccessoryViewsInset;
    struct RetainPtr<WKPDFPageNumberIndicator> { 
        void *m_ptr; 
    } _pageNumberIndicator;
    struct Vector<PDFPageInfo, 0, WTF::CrashOnOverflow> { 
        struct { /* ? */ } *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    } _pages;
    struct RetainPtr<UIPDFDocument> { 
        void *m_ptr; 
    } _pdfDocument;
    UIScrollView *_scrollView;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _suggestedFilename;
    WKWebView *_webView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) struct CGPDFDocument { }* pdfDocument;
@property(readonly) NSString * suggestedFilename;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearPages;
- (void)_computePageAndDocumentFrames;
- (struct CGPoint { float x1; float x2; })_offsetForPageNumberIndicator;
- (void)_revalidateViews;
- (void)_updatePageNumberIndicator;
- (void)dealloc;
- (struct CGPDFDocument { }*)pdfDocument;
- (void)resetZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)suggestedFilename;
- (void)web_computedContentInsetDidChange;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setMinimumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { float x1; float x2; })arg1;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 kind:(int)arg4;

@end
