/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipTrackCommand : MPRemoteCommand {
    BOOL _adPreventsDisplay;
    struct { 
        int numberOfAvailableSkips; 
        int skipFrequency; 
        double skipInterval; 
    } _skipLimit;
}

@property BOOL adPreventsDisplay;
@property struct { int x1; int x2; double x3; } skipLimit;

- (id)_mediaRemoteCommandInfoOptions;
- (BOOL)adPreventsDisplay;
- (void)setAdPreventsDisplay:(BOOL)arg1;
- (void)setSkipLimit:(struct { int x1; int x2; double x3; })arg1;
- (struct { int x1; int x2; double x3; })skipLimit;

@end
