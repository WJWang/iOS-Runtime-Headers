/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRenderer : NSObject {
    <KNAnimationPluginContext> *_pluginContext;
    KNAnimatedSlideView *mASV;
    BOOL mAreAnimationsPaused;
    unsigned int mDirection;
    double mDuration;
    id mPlugin;
    Class mPluginClass;
    KNPlaybackSession *mSession;
}

@property (nonatomic) unsigned int direction;
@property (nonatomic) double duration;
@property (nonatomic, readonly) id plugin;
@property (nonatomic, readonly) Class pluginClass;
@property (nonatomic, readonly) <KNAnimationPluginContext> *pluginContext;

- (void)dealloc;
- (unsigned int)direction;
- (double)duration;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (id)plugin;
- (Class)pluginClass;
- (id)pluginContext;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setDirection:(unsigned int)arg1;
- (void)setDuration:(double)arg1;
- (void)setupPluginContext;
- (void)stopAnimations;
- (void)teardown;

@end
