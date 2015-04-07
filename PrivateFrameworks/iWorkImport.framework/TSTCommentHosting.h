/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKModel>, NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSTTableInfo;

@interface TSTCommentHosting : NSObject <TSDAnnotationHosting, TSDCommentStorageDelegate> {
    BOOL _forRollover;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mCellID;
    TSDCommentStorage *mStorage;
    TSTTableInfo *mTableInfo;
}

@property(readonly) int annotationDisplayStringType;
@property(readonly) int annotationType;
@property(readonly) TSKAnnotationAuthor * author;
@property(readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } cellID;
@property(readonly) NSString * changeTrackingContentFormatString;
@property(readonly) NSString * changeTrackingContentString;
@property(readonly) NSString * changeTrackingTitleString;
@property(readonly) NSDate * date;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isForRollover,readonly) BOOL forRollover;
@property(readonly) unsigned int hash;
@property <TSKModel> * hostingModel;
@property(copy) TSDCommentStorage * storage;
@property(readonly) Class superclass;
@property(readonly) TSTTableInfo * tableInfo;

- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)author;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellID;
- (id)commandForDeletingComment;
- (void)commentStorageTextDidChange:(id)arg1;
- (void)commitText:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (Class)editorClass;
- (unsigned int)hash;
- (id)hostingModel;
- (id)initWithStorage:(id)arg1 forTableInfo:(id)arg2 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForRollover;
- (void)setAuthor:(id)arg1;
- (void)setHostingModel:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (id)tableInfo;

@end
