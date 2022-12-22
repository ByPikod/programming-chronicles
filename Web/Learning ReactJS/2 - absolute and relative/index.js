function Box( props ){
    return(
        <div className={ "Box " + props.extraClass }>
            
        </div>
    )
}

function ActualBody() {
    return (
        <div>
            <div className="boxRow">
                <Box></Box>
                <Box></Box>
                <Box extraClass="relativeBox"></Box>
                <Box></Box>
            </div>
            <div className="boxRow">
                <Box></Box>
                <Box></Box>
                <Box extraClass="absoluteBox"></Box>
                <Box></Box>
            </div>
        </div>
    )
}

ReactDOM.render(
    ActualBody(),
    document.getElementById("root")
)