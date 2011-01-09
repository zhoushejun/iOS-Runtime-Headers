/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString;



@interface CKTextMessagePart : CKMessagePart 
{
    NSString *_text;
    NSString *_contentLocation;
}

@property(copy) NSString *contentLocation;


- (id)detachedCopy;
- (BOOL)isDisplayable;
- (NSInteger)type;
- (id)initWithText:(id)arg1;
- (id)text;
- (void)dealloc;
- (void)copyToPasteboard;
- (id)contentLocation;
- (void)setContentLocation:(id)arg1;

@end