/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, CHDSeriesCollection, CHDDataLabel, CHDChart;

@interface CHDChartType : NSObject {
    boolmVaryColors;
    EDCollection *mAxisIds;
    CHDChart *mChart;
    CHDDataLabel *mDefaultDataLabel;
    CHDSeriesCollection *mSeries;
}

+ (id)chartTypeWithChart:(id)arg1;
+ (bool)is3DType;

- (id)axes;
- (id)axisForClass:(Class)arg1;
- (id)axisIds;
- (id)chart;
- (id)contentFormat;
- (void)dealloc;
- (id)defaultDataLabel;
- (int)defaultLabelPosition;
- (id)defaultTitleWithResources:(id)arg1;
- (id)initWithChart:(id)arg1;
- (bool)isHorizontal;
- (bool)isPlotedOnSecondaryAxis;
- (bool)isVaryColors;
- (id)seriesCollection;
- (void)setDefaultDataLabel:(id)arg1;
- (void)setSeriesCollection:(id)arg1;
- (void)setVaryColors:(bool)arg1;

@end