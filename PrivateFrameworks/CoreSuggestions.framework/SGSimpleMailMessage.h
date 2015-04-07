/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@class NSArray, NSDate, NSNumber, NSString, SGSimpleNamedEmailAddress;

@interface SGSimpleMailMessage : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_bcc;
    NSString *_body;
    NSArray *_cc;
    NSDate *_date;
    SGSimpleNamedEmailAddress *_from;
    NSArray *_headers;
    NSString *_htmlBody;
    BOOL _isInhuman;
    NSString *_messageId;
    NSNumber *_received;
    SGSimpleNamedEmailAddress *_replyTo;
    NSString *_subject;
    NSArray *_to;
}

@property(copy) NSArray * bcc;
@property(copy) NSString * body;
@property(copy) NSArray * cc;
@property(copy) NSDate * date;
@property(copy) SGSimpleNamedEmailAddress * from;
@property(readonly) NSArray * headers;
@property(copy) NSString * htmlBody;
@property BOOL isInhuman;
@property(readonly) SGSimpleNamedEmailAddress * mailingList;
@property(copy) NSString * messageId;
@property(copy) NSNumber * received;
@property(copy) SGSimpleNamedEmailAddress * replyTo;
@property(copy) NSString * subject;
@property(copy) NSArray * to;
@property(readonly) NSString * uniqueId;

+ (id)fromDictionary:(id)arg1;
+ (id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)bcc;
- (id)body;
- (id)cc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (unsigned int)hash;
- (id)headers;
- (id)htmlBody;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSimpleMailMessage:(id)arg1;
- (BOOL)isInhuman;
- (id)mailingList;
- (id)messageId;
- (id)received;
- (id)replyTo;
- (id)rfc822Data;
- (void)setBcc:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setHtmlBody:(id)arg1;
- (void)setIsInhuman:(BOOL)arg1;
- (void)setMessageId:(id)arg1;
- (void)setReceived:(id)arg1;
- (void)setReplyTo:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (id)subject;
- (id)to;
- (id)uniqueId;

@end
