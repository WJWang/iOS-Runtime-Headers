/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGRectangle;

@interface LBSGGeocodeRequest : PBRequest {
    int _addressLinesLimit;
    LBSGRectangle *_boundingBox;
    BOOL _hasAddressLinesLimit;
    BOOL _hasIncludeBoundingBoxes;
    BOOL _hasNumFeatureLimit;
    BOOL _includeBoundingBoxes;
    unsigned int _numFeatureLimit;
}

@property int addressLinesLimit;
@property(retain) LBSGRectangle * boundingBox;
@property BOOL hasAddressLinesLimit;
@property(readonly) BOOL hasBoundingBox;
@property BOOL hasIncludeBoundingBoxes;
@property BOOL hasNumFeatureLimit;
@property BOOL includeBoundingBoxes;
@property unsigned int numFeatureLimit;

- (int)addressLinesLimit;
- (id)boundingBox;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressLinesLimit;
- (BOOL)hasBoundingBox;
- (BOOL)hasIncludeBoundingBoxes;
- (BOOL)hasNumFeatureLimit;
- (BOOL)includeBoundingBoxes;
- (unsigned int)numFeatureLimit;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressLinesLimit:(int)arg1;
- (void)setBoundingBox:(id)arg1;
- (void)setHasAddressLinesLimit:(BOOL)arg1;
- (void)setHasIncludeBoundingBoxes:(BOOL)arg1;
- (void)setHasNumFeatureLimit:(BOOL)arg1;
- (void)setIncludeBoundingBoxes:(BOOL)arg1;
- (void)setNumFeatureLimit:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end