/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoRequest : NSObject {
    AVWeakReferencingDelegateStorage * _delegateStorage;
    unsigned int  _expectedOriginalPhotoCount;
    unsigned int  _expectedPhotoCount;
    unsigned int  _expectedRawPhotoCount;
    unsigned int  _firedCallbackFlags;
    unsigned int  _firedPhotoCallbacksCount;
    unsigned int  _firedRawPhotoCallbacksCount;
    struct opaqueCMSampleBuffer { } * _previewSampleBuffer;
    struct __IOSurface { } * _previewSurface;
    AVCaptureResolvedPhotoSettings * _resolvedSettings;
    AVCapturePhotoSettings * _unresolvedSettings;
    BOOL  _usesIOSurfaceDelegateCallbacks;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (nonatomic, readonly) unsigned int expectedOriginalPhotoCount;
@property (nonatomic, readonly) unsigned int expectedPhotoCount;
@property (nonatomic, readonly) unsigned int expectedRawPhotoCount;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic) unsigned int firedPhotoCallbacksCount;
@property (nonatomic) unsigned int firedRawPhotoCallbacksCount;
@property (nonatomic, retain) struct opaqueCMSampleBuffer { }*previewSampleBuffer;
@property (nonatomic, retain) struct __IOSurface { }*previewSurface;
@property (nonatomic, retain) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) AVCapturePhotoSettings *unresolvedSettings;
@property (nonatomic, readonly) BOOL usesIOSurfaceDelegateCallbacks;

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2;

- (void)dealloc;
- (id)delegateStorage;
- (unsigned int)expectedOriginalPhotoCount;
- (unsigned int)expectedPhotoCount;
- (unsigned int)expectedRawPhotoCount;
- (unsigned int)firedCallbackFlags;
- (unsigned int)firedPhotoCallbacksCount;
- (unsigned int)firedRawPhotoCallbacksCount;
- (void)incrementExpectedOriginalPhotoCount;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;
- (struct opaqueCMSampleBuffer { }*)previewSampleBuffer;
- (struct __IOSurface { }*)previewSurface;
- (id)resolvedSettings;
- (void)setFiredCallbackFlags:(unsigned int)arg1;
- (void)setFiredPhotoCallbacksCount:(unsigned int)arg1;
- (void)setFiredRawPhotoCallbacksCount:(unsigned int)arg1;
- (void)setPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setPreviewSurface:(struct __IOSurface { }*)arg1;
- (void)setResolvedSettings:(id)arg1;
- (id)unresolvedSettings;
- (BOOL)usesIOSurfaceDelegateCallbacks;

@end
