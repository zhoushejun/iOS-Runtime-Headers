/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPCommentSummary, NSData, NSMutableArray;

@interface CKDPGetCommentsResponse : PBCodable <NSCopying> {
    NSMutableArray *_comments;
    NSData *_continuationMarker;
    struct { 
        unsigned int totalCount : 1; 
    } _has;
    CKDPCommentSummary *_summary;
    int _totalCount;
}

@property(retain) NSMutableArray * comments;
@property(retain) NSData * continuationMarker;
@property(readonly) BOOL hasContinuationMarker;
@property(readonly) BOOL hasSummary;
@property BOOL hasTotalCount;
@property(retain) CKDPCommentSummary * summary;
@property int totalCount;

- (void).cxx_destruct;
- (void)addComments:(id)arg1;
- (void)clearComments;
- (id)comments;
- (id)commentsAtIndex:(unsigned int)arg1;
- (unsigned int)commentsCount;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContinuationMarker;
- (BOOL)hasSummary;
- (BOOL)hasTotalCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setContinuationMarker:(id)arg1;
- (void)setHasTotalCount:(BOOL)arg1;
- (void)setSummary:(id)arg1;
- (void)setTotalCount:(int)arg1;
- (id)summary;
- (int)totalCount;
- (void)writeTo:(id)arg1;

@end
