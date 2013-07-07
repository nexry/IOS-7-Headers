/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "SSXPCCoding.h"

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, SSDownloadPolicy, SSItem, SSItemOffer, SSNetworkConstraints, SSURLRequestProperties;

@interface SSPurchase : NSObject <SSXPCCoding, NSCoding, NSCopying>
{
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    BOOL _backgroundPurchase;
    int _batchIdentifier;
    NSString *_buyParameters;
    BOOL _createsDownloads;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadPolicy *_downloadPolicy;
    NSMutableDictionary *_downloadProperties;
    long long _expectedDownloadFileSize;
    NSArray *_filteredAssetTypes;
    BOOL _ignoresForcedPasswordRestriction;
    SSItem *_item;
    SSItemOffer *_itemOffer;
    SSNetworkConstraints *_networkConstraints;
    long long _placeholderDownloadIdentifier;
    SSURLRequestProperties *_requestProperties;
    id _requiredDeviceCapabilities;
    long long _uniqueIdentifier;
}

+ (id)purchaseWithBuyParameters:(id)arg1;
- (void)setDownloadMetadata:(id)arg1;
- (id)downloadMetadata;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property long long uniqueIdentifier;
@property(copy) id requiredDeviceCapabilities;
@property long long placeholderDownloadIdentifier;
@property long long expectedDownloadFileSize;
@property int batchIdentifier;
- (id)itemOffer;
- (id)item;
@property(readonly) NSData *databaseEncoding;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)valueForDownloadProperty:(id)arg1;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
@property(copy) SSURLRequestProperties *requestProperties;
@property(copy) SSNetworkConstraints *networkConstraints;
@property BOOL ignoresForcedPasswordRestriction;
@property(copy) NSArray *filteredAssetTypes;
@property(copy) NSDictionary *downloadProperties;
@property(copy) SSDownloadPolicy *downloadPolicy;
@property(nonatomic) BOOL createsDownloads;
@property(copy) NSString *buyParameters;
@property(getter=isBackgroundPurchase) BOOL backgroundPurchase;
@property(copy) NSString *affiliateIdentifier;
@property(retain) NSNumber *accountIdentifier;
- (void)dealloc;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithItem:(id)arg1;
- (id)init;
- (id)_initSSPurchase;

@end
