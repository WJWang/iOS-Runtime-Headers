/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    HKMinMaxCoordinate *_diastolicCoordinate;
    HKMinMaxCoordinate *_systolicCoordinate;
    id _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKMinMaxCoordinate *diastolicCoordinate;
@property (nonatomic, readonly) float endXValue;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKMinMaxCoordinate *systolicCoordinate;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 roundToViewScale:(BOOL)arg2;
- (id)description;
- (id)diastolicCoordinate;
- (float)endXValue;
- (id)initWithSystolicCoordinate:(id)arg1 diastolicCoordinate:(id)arg2 userInfo:(id)arg3;
- (float)startXValue;
- (id)systolicCoordinate;
- (id)userInfo;

@end
