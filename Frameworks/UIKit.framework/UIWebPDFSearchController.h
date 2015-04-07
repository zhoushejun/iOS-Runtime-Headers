/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, NSObject<UIWebPDFSearchControllerDelegate>, NSOperationQueue, NSString, UIPDFDocument;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {
    UIPDFDocument *_documentToSearch;
    BOOL _notifiedThatSearchBegin;
    unsigned int _pageIndexWhenLimitHit;
    unsigned int _resultIndexWhenLimitHit;
    NSMutableArray *_results;
    NSOperationQueue *_searchQueue;
    NSString *_searchString;
    float documentScale;
    unsigned int resultLimit;
    NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
    unsigned int startingPageIndex;
}

@property float documentScale;
@property(retain) UIPDFDocument * documentToSearch;
@property(readonly) BOOL paused;
@property unsigned int resultLimit;
@property(retain) NSArray * results;
@property NSObject<UIWebPDFSearchControllerDelegate> * searchDelegate;
@property(retain) NSString * searchString;
@property(readonly) BOOL searching;
@property unsigned int startingPageIndex;

- (unsigned int)_actualStartingPageIndex;
- (void)_clearSearchQueue;
- (void)cancel;
- (void)dealloc;
- (float)documentScale;
- (id)documentToSearch;
- (id)init;
- (void)pause;
- (BOOL)paused;
- (unsigned int)resultLimit;
- (id)results;
- (void)resume;
- (void)search:(id)arg1;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (id)searchDelegate;
- (void)searchDidBegin:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (id)searchString;
- (void)searchWasCancelled:(id)arg1;
- (BOOL)searching;
- (void)setDocumentScale:(float)arg1;
- (void)setDocumentToSearch:(id)arg1;
- (void)setResultLimit:(unsigned int)arg1;
- (void)setResults:(id)arg1;
- (void)setSearchDelegate:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setStartingPageIndex:(unsigned int)arg1;
- (unsigned int)startingPageIndex;

@end
