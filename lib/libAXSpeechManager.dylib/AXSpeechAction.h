/* Generated by RuntimeBrowser
   Image: /usr/lib/libAXSpeechManager.dylib
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString, TTSSpeechRequest;

@interface AXSpeechAction : NSObject {
    BOOL _cannotInterrupt;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionCallback;

    NSMutableArray *_emojiRangeReplacements;
    NSString *_language;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _onPauseCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _onResumeCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _onSpeechStartCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _onWillSpeakRangeCallback;

    float _pitch;
    NSString *_processedString;
    BOOL _shouldDetectLanguage;
    BOOL _shouldPrecomposeString;
    BOOL _shouldProcessEmoji;
    BOOL _shouldProcessEmoticons;
    BOOL _shouldQueue;
    float _speakingRate;
    TTSSpeechRequest *_speechRequest;
    NSString *_string;
    BOOL _useCompactVoice;
    NSString *_voiceIdentifier;
    float _volume;
    int _wordCallbackPostProcessedOffset;
}

@property BOOL cannotInterrupt;
@property(copy) id completionCallback;
@property(retain) NSMutableArray * emojiRangeReplacements;
@property(retain) NSString * language;
@property(copy) id onPauseCallback;
@property(copy) id onResumeCallback;
@property(copy) id onSpeechStartCallback;
@property(copy) id onWillSpeakRangeCallback;
@property float pitch;
@property(retain) NSString * processedString;
@property BOOL shouldDetectLanguage;
@property BOOL shouldPrecomposeString;
@property BOOL shouldProcessEmoji;
@property BOOL shouldProcessEmoticons;
@property BOOL shouldQueue;
@property float speakingRate;
@property(retain) TTSSpeechRequest * speechRequest;
@property(copy) NSString * string;
@property BOOL useCompactVoice;
@property(retain) NSString * voiceIdentifier;
@property float volume;
@property int wordCallbackPostProcessedOffset;

+ (id)actionWithString:(id)arg1 shouldQueue:(BOOL)arg2;

- (id)_detectLanguageFromContent;
- (BOOL)cannotInterrupt;
- (id)completionCallback;
- (void)dealloc;
- (id)description;
- (id)emojiRangeReplacements;
- (id)init;
- (id)language;
- (id)onPauseCallback;
- (id)onResumeCallback;
- (id)onSpeechStartCallback;
- (id)onWillSpeakRangeCallback;
- (float)pitch;
- (void)preprocessAction;
- (id)processedString;
- (void)setCannotInterrupt:(BOOL)arg1;
- (void)setCompletionCallback:(id)arg1;
- (void)setEmojiRangeReplacements:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOnPauseCallback:(id)arg1;
- (void)setOnResumeCallback:(id)arg1;
- (void)setOnSpeechStartCallback:(id)arg1;
- (void)setOnWillSpeakRangeCallback:(id)arg1;
- (void)setPitch:(float)arg1;
- (void)setProcessedString:(id)arg1;
- (void)setShouldDetectLanguage:(BOOL)arg1;
- (void)setShouldPrecomposeString:(BOOL)arg1;
- (void)setShouldProcessEmoji:(BOOL)arg1;
- (void)setShouldProcessEmoticons:(BOOL)arg1;
- (void)setShouldQueue:(BOOL)arg1;
- (void)setSpeakingRate:(float)arg1;
- (void)setSpeechRequest:(id)arg1;
- (void)setString:(id)arg1;
- (void)setUseCompactVoice:(BOOL)arg1;
- (void)setVoiceIdentifier:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setWordCallbackPostProcessedOffset:(int)arg1;
- (BOOL)shouldDetectLanguage;
- (BOOL)shouldPrecomposeString;
- (BOOL)shouldProcessEmoji;
- (BOOL)shouldProcessEmoticons;
- (BOOL)shouldQueue;
- (float)speakingRate;
- (id)speechRequest;
- (id)string;
- (BOOL)useCompactVoice;
- (id)voiceIdentifier;
- (float)volume;
- (int)wordCallbackPostProcessedOffset;

@end
