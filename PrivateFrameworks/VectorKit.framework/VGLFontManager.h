/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLFontAtlas, VGLFontGlyphCache;

@interface VGLFontManager : NSObject {
    VGLFontAtlas *_fontAtlas;
    VGLFontGlyphCache *_glyphCache;
}

+ (id)sharedManager;

- (void)_activeTileGroupDidChange:(id)arg1;
- (void)_purgeFontData;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)fontAtlas;
- (id)glyphCache;
- (id)init;
- (struct __CTFont { }*)referenceFontForFontKey:(id)arg1;

@end