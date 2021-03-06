/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataAmendment : PBCodable <NSCopying> {
    struct { 
        unsigned int suppressSiriRating : 1; 
    } _has;
    BOOL _suppressSiriRating;
}

@property (nonatomic) BOOL hasSuppressSiriRating;
@property (nonatomic) BOOL suppressSiriRating;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSuppressSiriRating;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasSuppressSiriRating:(BOOL)arg1;
- (void)setSuppressSiriRating:(BOOL)arg1;
- (BOOL)suppressSiriRating;
- (void)writeTo:(id)arg1;

@end
