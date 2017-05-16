//
//  JHWaveChart.h
//  JHChartDemo
//


#import "JHChart.h"

typedef NS_ENUM(NSInteger,JHWaveChartType){
    
    JHWaveChartUpType = 0,
    JHWaveChartUpAndDownType
    
};

@interface JHWaveChart : JHChart




/*         X轴刻度数据          */
@property (nonatomic, strong) NSArray * xLineDataArr;


/*         值数据数组          */
@property (nonatomic, strong) NSArray * valueDataArr;

/*    x 和 y 轴颜色   */
@property (nonatomic, strong) UIColor * xAndYLineColor;
-(instancetype)initWithFrame:(CGRect)frame andType:(JHWaveChartType)waveChartType;



@end
